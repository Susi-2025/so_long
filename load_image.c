/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:38:59 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/29 19:33:00 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static	mlx_image_t	*png_to_img(t_game *game, const char *link);

void	load_image(t_game *game)
{
	game->image = ft_calloc((IMG_NO + 1), sizeof(mlx_image_t *));
	if (!game->image)
		game_error("Allocate img fail", game);
	game->image[P] = png_to_img(game, A_PLAYER);
	game->image[C] = png_to_img(game, A_COLLECTIBLE);
	game->image[E] = png_to_img(game, A_EXIT);
	game->image[O] = png_to_img(game, A_OPEN);
	game->image[S] = png_to_img(game, A_SPACE);
	game->image[W] = png_to_img(game, A_WALL);
}

static	mlx_image_t	*png_to_img(t_game *game, const char *link)
{
	mlx_texture_t	*texture;
	mlx_image_t		*image;

	texture = mlx_load_png(link);
	if (!texture)
		game_error(mlx_strerror(mlx_errno), game);
	image = mlx_texture_to_image(game->mlx, texture);
	mlx_delete_texture(texture);
	if (!image)
		game_error(mlx_strerror(mlx_errno), game);
	if (!mlx_resize_image(image, PIXEL, PIXEL))
		game_error(mlx_strerror(mlx_errno), game);
	return (image);
}
