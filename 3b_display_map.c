/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3b_display_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 17:09:45 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 15:32:22 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	image_to_window(t_game *game,
					mlx_image_t *img, int row, int col);

void	display_map(t_game *game, int row, int col)
{
	while (row < game->map->rows)
	{
		col = 0;
		while (col < game->map->cols)
		{
			if (game->map->arr[row][col] == '1')
				image_to_window(game, game->image[W], row, col);
			else
			{
				image_to_window(game, game->image[S], row, col);
				if (game->map->arr[row][col] == 'C')
					image_to_window(game, game->image[C], row, col);
				else if (game->map->arr[row][col] == 'E')
				{
					image_to_window(game, game->image[O], row, col);
					image_to_window(game, game->image[E], row, col);
				}
			}
			col++;
		}
		row++;
	}
	image_to_window(game, game->image[P], game->current.row, game->current.col);
}

static	void	image_to_window(t_game *game,
					mlx_image_t *img, int row, int col)
{
	if (!img)
		game_error("Image is Null", game);
	if (mlx_image_to_window(game->mlx, img, col * PIXEL, row * PIXEL) < 0)
		game_error(mlx_strerror(mlx_errno), game);
}
