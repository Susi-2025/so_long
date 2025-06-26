/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:06:33 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/26 18:56:02 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error_map(char *str, char **map, t_game *game)
{
	ft_free_map(map);
	ft_error(str, game);
}

void	ft_error_malloc(char *str, char *m1, char *m2, t_game *game)
{
	free(m1);
	free(m2);
	ft_error(str, game);
}

void	ft_error(char *str, t_game *game)
{
	printf("%s\n", str);
	free(game);
	exit (EXIT_FAILURE);
}

void	ft_free_map(char **map)
{
	int	i;

	if (!map)
		return ;
	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}
