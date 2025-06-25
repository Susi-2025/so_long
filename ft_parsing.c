/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/25 20:38:36 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_parsing(int ac, char **av, t_game *game)
{
	int		fd;
	char	*map_read;
	char	**map;

	if (ac != 2)
		ft_error("Wrong arguments", game);
	fd = ft_open_file_check(av[1], game);
	map_read = ft_read_map(fd, game);
	// can't detect empty line in the map_read
	map = ft_init_map(map_read, game);
	ft_check_map(map, game);
	ft_free(map);
	// check map;
	close(fd);
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

	out = ft_strdup("");
	if (!out)
		ft_error("Malloc error\n", game);
	while (1)
	{
		map_temp = ft_gnl(fd);
		if (!map_temp)
			break ;
		out_temp = ft_strjoin(out, map_temp);
		if (!out_temp)
		{
			free(map_temp);
			free(out);
			ft_error("Join map error\n", game);
		}
		free(out);
		free(map_temp);
		out = out_temp;
	}
	return (out);
}

char	**ft_init_map(char *map_temp, t_game *game)
{
	int		i;
	char	**map;

	map = ft_split(map_temp, '\n');
	free(map_temp);
	if (!map)
	{
		ft_free(map);
		ft_error("Split map error\n", game);
	}
	i = 0;
	while (map[i])
		printf("Map value is: %s\n",map[i++]);
	return (map);
}

void	ft_check_map(char **map, t_game *game)
{
	int	i;
	int	len_curr;
	int	len_next;
	
	i = 0;
	while (map[i] && map[i + 1])
	{
		len_curr = ft_strlen(map[i]);
		len_next = ft_strlen(map[i + 1]);
		if (len_curr != len_next || len_curr == 1)
		{
			ft_error("Map is not square or empty line", game);
			ft_free(map);
		}
		i++;
	}
}
