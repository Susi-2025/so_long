/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/26 18:49:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_parsing(int ac, char **av, t_game *game)
{
	int		fd;
	char	*map_read;
	char	**map;

	if (ac != 2)
		ft_error("Wrong arguments", game);
	fd = ft_open_file_check(av[1], game);
	map_read = ft_read_map(fd, game);
	close(fd);
	ft_check_empty(map_read, game);
	map = ft_init_map(map_read, game);
	return (map);
}

int	ft_open_file_check(char *name, t_game *game)
{
	int		fd;
	char	*filepath;
	size_t	len;

	len = ft_strlen(name);
	if ((len < 5) || (ft_strncmp(name + len - 4, ".ber", 4) != 0))
		ft_error("Wrong file name", game);
	filepath = ft_strjoin("./maps/", name);
	if (!filepath)
		ft_error("Memory allocation fail", game);
	fd = open(filepath, O_RDONLY);
	free(filepath);
	if (fd == -1)
		ft_error("Couldn't open file\n", game);
	return (fd);
}

char	*ft_read_map(int fd, t_game *game)
{
	char	*map_temp;
	char	*out_temp;
	char	*out;
	int		count;

	out = ft_strdup("");
	if (!out)
		ft_error("Malloc error\n", game);
	count = 0;
	while (1)
	{
		map_temp = ft_gnl(fd);
		if (map_temp == NULL && count == 0)
			ft_error_malloc("Map file is empty", map_temp, out, game);
		if (!map_temp)
			break ;
		out_temp = ft_strjoin(out, map_temp);
		if (!out_temp)
			ft_error_malloc("Join map error", map_temp, out, game);
		free(out);
		free(map_temp);
		out = out_temp;
		count++;
	}
	return (out);
}

void	ft_check_empty(char *map_read, t_game *game)
{
	int	i;

	i = 0;
	while (map_read[i] && map_read[i + 1])
	{
		if (map_read[0] == '\n')
			ft_error_malloc("Empty line at begin", map_read, NULL, game);
		if (map_read[i] == '\n' && map_read[i + 1] == '\n')
			ft_error_malloc("Map has empty line", map_read, NULL, game);
		i++;
	}
}

char	**ft_init_map(char *map_temp, t_game *game)
{
	int		i;
	char	**map;

	map = ft_split(map_temp, '\n');
	free(map_temp);
	if (!map)
		ft_error_map("Split map error", map, game);
	i = 0;
	while (map[i])
		printf("Map value is: %s\n", map[i++]);
	return (map);
}
