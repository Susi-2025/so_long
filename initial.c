/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/27 19:43:29 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initial_map(char *map_temp, t_map *map)
{
	int		i;

	map->arr = ft_split(map_temp, '\n');
	free(map_temp);
	if (!map->arr)
		map_error("Split map error", map);
	i = 0;
	map->cols = ft_strlen(map->arr[0]);
	while (map->arr[i++])
		map->rows++;
	i = 0;
	while (map->arr[i])
		if ((int)(ft_strlen(map->arr[i++])) != map->cols)
			map_error("Map is no rec", map);
	i = 0;
	while (map->arr[i])
	{
		printf("Map value is %s\n", map->arr[i]);
		i++;
	}
	init_check_remain(map, 0, 0);
}

void	init_check_remain(t_map *map, int i, int j)
{
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			if ((i == 0 || i == map->rows - 1 || j == 0 || j == map->cols - 1)
				&& (map->arr[i][j] != '1'))
				map_error("The wall is wrong", map);
			if (!ft_strchr("01CEP", map->arr[i][j]))
				map_error("Map has weird character", map);
			if (map->arr[i][j] == 'P')
				map->p_count++;
			if (map->arr[i][j] == 'C')
				map->c_count++;
			if (map->arr[i][j] == 'E')
				map->e_count++;
			j++;
		}
		i++;
	}
	if (map->p_count != 1 || map->e_count != 1 || map->c_count == 0)
		map_error("Map has wrong number of P,C,E", map);
}
