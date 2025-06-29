/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:06:33 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 19:21:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	error_malloc(char *str, char *m1, char *m2, int fd)
{
	close(fd);
	free(m1);
	free(m2);
	error_message(str);
}

void	error_message(char *str)
{
	ft_printf("Error\n");
	ft_printf("%s\n", str);
	exit (EXIT_FAILURE);
}

void	error_fd(char *str, int fd)
{
	close(fd);
	error_message(str);
}

void	map_error(char *str, t_map *map)
{
	if (map && map->arr)
		ft_free_triptr(&map->arr);
	error_message(str);
}
