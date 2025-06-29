/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_err_handle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:06:33 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 19:38:50 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_img(mlx_t *mlx, mlx_image_t **image)
{
	int	i;

	if (!image)
		return ;
	i = 0;
	while (image[i])
	{
		mlx_delete_image(mlx, image[i]);
		i++;
	}
	free (image);
}

void	game_close(t_game *game, int stt)
{
	if (!game)
		exit (stt);
	if (game->map && game->map->arr)
		ft_free_triptr(&game->map->arr);
	if (game->image)
		free_img(game->mlx, game->image);
	if (game->mlx)
		mlx_terminate(game->mlx);
	exit (stt);
}

void	game_error(const char *str, t_game *game)
{
	ft_printf("Error\n");
	ft_printf("%s\n", str);
	game_close(game, EXIT_FAILURE);
}

void	game_message(const char *str, t_game *game)
{
	ft_printf("%s\n", str);
	game_close(game, EXIT_FAILURE);
}
