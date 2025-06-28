/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   par_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:06:33 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/28 14:28:10 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	par_error_malloc(char *str, char *m1, char *m2, int fd)
{
	close(fd);
	free(m1);
	free(m2);
	par_error(str);
}

void	par_error(char *str)
{
	write(1, "Error\n", 6);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	exit (EXIT_FAILURE);
}

void	par_fd_error(char *str, int fd)
{
	close(fd);
	par_error(str);
}

void	map_error(char *str, t_map *map)
{
	if (map && map->arr)
		ft_free_triptr(&map->arr);
	par_error(str);
}

void	game_close(t_game *game, int stt)
{
//	int	index;
	
	if (!game)
		return ;
	if (game->map && game->map->arr)
		ft_free_triptr(&game->map->arr);
	if (game->image)
		free(game->image);
	if (game->mlx)
		mlx_terminate(game->mlx);
	exit (stt);
}

void	game_error(const char *str, t_game *game)
{
	write(1, "Error\n", 6);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	game_close(game, EXIT_FAILURE);
}
