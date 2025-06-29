/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:55:08 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 15:35:14 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	char	*map_read;
	t_map	map;
	t_game	game;

	map_read = parsing(ac, av);
	ft_bzero(&map, sizeof(map));
	initial_map(map_read, &map);
	ft_bzero(&game, sizeof(t_game));
	game.map = &map;
	start_game(&game);
	game_close(&game, EXIT_SUCCESS);
	return (0);
}
