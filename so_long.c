/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 19:55:08 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/27 18:27:33 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	char	*map_read;
	t_map	map;

	map_read = parsing(ac, av);
	ft_bzero(&map, sizeof(map));
	initial_map(map_read, &map);
	
	map_error("Close", &map);
	return (0);
}
