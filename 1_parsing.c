/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_parsing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 19:15:55 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	int	valid_name(char *name);
static	char	*read_map(int fd);
static	void	empty_line(char *map_read);

char	*parsing(int ac, char **av)
{
	int		fd;
	char	*map_read;

	if (ac != 2)
		error_message("Wrong arguments");
	fd = valid_name(av[1]);
	map_read = read_map(fd);
	close(fd);
	empty_line(map_read);
	return (map_read);
}

static	int	valid_name(char *name)
{
	int		fd;
	char	*filepath;
	size_t	len;

	len = ft_strlen(name);
	if ((len < 5) || (ft_strncmp(name + len - 4, ".ber", 4) != 0))
		error_message("Wrong file name");
	filepath = ft_strjoin("./maps/", name);
	if (!filepath)
		error_message("Memory allocation fail");
	fd = open(filepath, O_RDONLY);
	free(filepath);
	if (fd == -1)
		error_message("Couldn't open file\n");
	return (fd);
}

static	char	*read_map(int fd)
{
	char	*map_temp;
	char	*out_temp;
	char	*out;
	int		count;

	out = ft_strdup("");
	if (!out)
		error_fd("Malloc error\n", fd);
	count = 0;
	while (1)
	{
		map_temp = ft_gnl(fd);
		if (map_temp == NULL && count == 0)
			error_malloc("Map file is empty", map_temp, out, fd);
		if (!map_temp)
			break ;
		out_temp = ft_strjoin(out, map_temp);
		if (!out_temp)
			error_malloc("Join map error", map_temp, out, fd);
		free(out);
		free(map_temp);
		out = out_temp;
		count++;
	}
	return (out);
}

static	void	empty_line(char *map_read)
{
	int	i;

	i = 0;
	while (map_read[i] && map_read[i + 1])
	{
		if (map_read[0] == '\n')
		{
			free(map_read);
			error_message("Empty line at begin");
		}
		if (map_read[i] == '\n' && map_read[i + 1] == '\n')
		{
			free(map_read);
			error_message("Map has empty line");
		}
		i++;
	}
}
