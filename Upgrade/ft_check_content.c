/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_content.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/27 11:21:48 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_content(char **map)
{
	ft_check_inside(map);
	ft_check_ep(map);
}

void	ft_check_inside(char **map)
{
	int	i;
	int	j;

	i = 1;
	while (map[i])
	{
		j = 1;
		while (map[i][j])
		{
			if (!ft_strchr("01CEP", map[i][j]))
				ft_error_map("Invalid map", map);
			j++;
		}
		i++;
	}
}

void	ft_check_ep(char **map)
{
	int	i;
	int	j;
	int	exist_p;
	int	exist_e;
	int	exist_c;

	i = 1;
	exist_e = 0;
	exist_p = 0;
	exist_c = 0;
	while (map[i])
	{
		j = 1;
		while (map[i][j])
		{
			exist_e = exist_e + (map[i][j] == 'E');
			exist_p = exist_p + (map[i][j] == 'P');
			exist_c = exist_c + (map[i][j] == 'C');
			j++;
		}
		i++;
	}
	if (exist_e != 1 || exist_p != 1 || exist_c == 0)
		ft_error_map("Map have invalid E,P,C", map);
}
