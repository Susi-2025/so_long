/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 13:58:04 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/03 12:18:16 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	close_hook(void	*param);
static	void	key_hook(mlx_key_data_t keydata, void *param);

void	start_game(t_game *game)
{
	mlx_set_setting(MLX_STRETCH_IMAGE, 1);
	game->mlx = mlx_init(game->map->cols * PIXEL,
			game->map->rows * PIXEL, "game so_long", true);
	if (!game->mlx)
		game_error(mlx_strerror(mlx_errno), game);
	game->current = game->map->start;
	load_image(game);
	display_map(game, 0, 0);
	mlx_key_hook(game->mlx, key_hook, game);
	mlx_close_hook(game->mlx, close_hook, game);
	mlx_loop(game->mlx);
	game_close(game, EXIT_SUCCESS);
}

static	void	key_hook(mlx_key_data_t keydata, void *param)
{
	t_game	*game;

	game = (t_game *)param;
	if (keydata.action == MLX_PRESS)
	{
		if (keydata.key == MLX_KEY_ESCAPE)
			game_close(game, EXIT_SUCCESS);
		else if (keydata.key == MLX_KEY_W || keydata.key == MLX_KEY_UP)
			game->next = (t_point){game->current.row - 1, game->current.col};
		else if (keydata.key == MLX_KEY_S || keydata.key == MLX_KEY_DOWN)
			game->next = (t_point){game->current.row + 1, game->current.col};
		else if (keydata.key == MLX_KEY_A || keydata.key == MLX_KEY_LEFT)
			game->next = (t_point){game->current.row, game->current.col - 1};
		else if (keydata.key == MLX_KEY_D || keydata.key == MLX_KEY_RIGHT)
			game->next = (t_point){game->current.row, game->current.col + 1};
		else
			return ;
		if (game->map->arr[game->next.row][game->next.col] != '1')
			player_move(game);
	}
}

static	void	close_hook(void	*param)
{
	game_close((t_game *)param, EXIT_SUCCESS);
}
