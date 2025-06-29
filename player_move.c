/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 11:44:05 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 15:34:51 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	disable_collectible(t_game *game);

void	player_move(t_game *game)
{
	game->current = game->next;
	if (game->map->arr[game->current.row][game->current.col] == 'C')
	{
		game->map->arr[game->current.row][game->current.col] = '0';
		disable_collectible(game);
		game->collect++;
		if (game->collect == game->map->c_collect)
			game->image[E]->instances[0].enabled = false;
	}
	else if (game->map->arr[game->current.row][game->current.col] == 'E' &&
			game->collect == game->map->c_collect)
		game_error("You Win", game);
	game->image[P]->instances[0].x = game->current.col * PIXEL;
	game->image[P]->instances[0].y = game->current.row * PIXEL;
}

static	void	disable_collectible(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map->c_collect)
	{
		if (game->image[C]->instances[i].x == game->current.col * PIXEL
			&& game->image[C]->instances[i].y == game->current.row * PIXEL)
		{
			game->image[C]->instances[i].enabled = false;
			break ;
		}
		i++;
	}
}
