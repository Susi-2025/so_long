/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/28 13:20:08 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	int	par_valid_name(char *name);
static	char	*par_read_map(int fd);
static	void	par_empty_line(char *map_read);

char	*parsing(int ac, char **av)
{
	int		fd;
	char	*map_read;

	if (ac != 2)
		par_error("Wrong arguments");
	fd = par_valid_name(av[1]);
	map_read = par_read_map(fd);
	close(fd);
	par_empty_line(map_read);
	return (map_read);
}

static	int	par_valid_name(char *name)
{
	int		fd;
	char	*filepath;
	size_t	len;

	len = ft_strlen(name);
	if ((len < 5) || (ft_strncmp(name + len - 4, ".ber", 4) != 0))
		par_error("Wrong file name");
	filepath = ft_strjoin("./maps/", name);
	if (!filepath)
		par_error("Memory allocation fail");
	fd = open(filepath, O_RDONLY);
	free(filepath);
	if (fd == -1)
		par_error("Couldn't open file\n");
	return (fd);
}

static	char	*par_read_map(int fd)
{
	char	*map_temp;
	char	*out_temp;
	char	*out;
	int		count;

	out = ft_strdup("");
	if (!out)
		par_fd_error("Malloc error\n", fd);
	count = 0;
	while (1)
	{
		map_temp = ft_gnl(fd);
		if (map_temp == NULL && count == 0)
			par_error_malloc("Map file is empty", map_temp, out, fd);
		if (!map_temp)
			break ;
		out_temp = ft_strjoin(out, map_temp);
		if (!out_temp)
			par_error_malloc("Join map error", map_temp, out, fd);
		free(out);
		free(map_temp);
		out = out_temp;
		count++;
	}
	return (out);
}

static	void	par_empty_line(char *map_read)
{
	int	i;

	i = 0;
	while (map_read[i] && map_read[i + 1])
	{
		if (map_read[0] == '\n')
		{
			free(map_read);
			par_error("Empty line at begin");
		}
		if (map_read[i] == '\n' && map_read[i + 1] == '\n')
		{
			free(map_read);
			par_error("Map has empty line");
		}
		i++;
	}
}
