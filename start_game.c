/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:58:04 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/28 17:53:33 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	start_game(t_game *game)
{
	mlx_set_setting(MLX_STRETCH_IMAGE, 0);
	game->mlx = mlx_init(game->map->cols * PIXEL,
			game->map->rows * PIXEL, "game so_long", true);
	if (!game->mlx)
	{
		fprintf(stderr, "mlx_init failed: %s\n", mlx_strerror(mlx_errno));
		game_error(mlx_strerror(mlx_errno), game);
	}
	else
		printf("Window created: %d x %d\n", game->map->cols * PIXEL, game->map->rows * PIXEL);
	game->current = game->map->start;
	load_image(game);
	display_map(game, 0, 0);
	mlx_loop(game->mlx);
//	game_close(game, EXIT_SUCCESS);
}
