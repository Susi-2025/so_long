/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_check_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/27 15:30:17 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_check_map(char **map)
{
	init_check_rec(map);
	init_check_row(map);
	init_check_col(map);
	ft_check_content(map);
}

void	init_check_rec(char **map)
{
	int	i;
	int	len_curr;
	int	len_next;

	i = 0;
	while (map[i] && map[i + 1])
	{
		len_curr = ft_strlen(map[i]);
		len_next = ft_strlen(map[i + 1]);
		if (len_curr != len_next)
			ft_error_map("Map is not rec", map);
		i++;
	}
}

void	init_check_row(char **map)
{
	int	l_r;
	int	j;

	j = 0;
	l_r = 0;
	while (map[l_r])
		l_r++;
	while (map[0][j] || map[l_r - 1][j])
	{
		if (map[0][j] != '1' || map[l_r - 1][j] != '1')
			ft_error_map("Invalid row border", map);
		j++;
	}
}

void	init_check_col(char **map)
{
	int	l_c;
	int	i;

	l_c = 0;
	i = 0;
	while (map[0][l_c] != '\0')
		l_c++;
	while (map[i])
	{
		if (map[i][0] != '1' || map[i][l_c - 1] != '1')
			ft_error_map("Invalid col border", map);
		i++;
	}
}
