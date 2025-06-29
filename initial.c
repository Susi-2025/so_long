/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 19:17:53 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	void	init_check_remain(t_map *map, int i, int j);
static	void	init_start_end(t_map *map, int i, int j);
static	void	valid_path(t_map *map);
static	void	flood_fill(t_map *map, char **visit, int row, int col);

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
	init_check_remain(map, 0, 0);
	init_start_end(map, 0, 0);
	valid_path(map);
}

static	void	init_check_remain(t_map *map, int i, int j)
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

static	void	init_start_end(t_map *map, int i, int j)
{
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			if (map->arr[i][j] == 'P')
				map->start = (t_point){i, j};
			if (map->arr[i][j] == 'E')
				map->end = (t_point){i, j};
			j++;
		}
		i++;
	}
}

static	void	flood_fill(t_map *map, char **visit, int row, int col)
{
	if (visit[row][col] == '1')
		return ;
	if (visit[row][col] == 'C')
		map->c_collect++;
	else if (visit[row][col] == 'E')
		map->exit_path++;
	visit[row][col] = '1';
	flood_fill(map, visit, row + 1, col);
	flood_fill(map, visit, row - 1, col);
	flood_fill(map, visit, row, col + 1);
	flood_fill(map, visit, row, col - 1);
}

static	void	valid_path(t_map *map)
{
	char	**visit;

	visit = ft_matrix_dup(map->arr, map->rows);
	if (!visit)
		map_error("Mem allocation fail", map);
	flood_fill(map, visit, map->start.row, map->start.col);
	ft_free_triptr(&visit);
	if (!map->exit_path)
		map_error("No valid path to play", map);
	if (map->c_collect != map->c_count)
		map_error("No valid path to collect all coin", map);
}
