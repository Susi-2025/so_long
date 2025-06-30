/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:27:00 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/30 12:26:42 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include "MLX42.h"

# include "./Library/library.h"

# define PIXEL 64

# define IMG_NO 6

# define A_PLAYER "./assets/textures/player.png"
# define A_COLLECTIBLE "./assets/textures/collectible.png"
# define A_EXIT "./assets/textures/exit.png"
# define A_OPEN "./assets/textures/open.png"
# define A_SPACE "./assets/textures/space.png"
# define A_WALL "./assets/textures/wall.png"

typedef enum e_object
{
	P,
	C,
	E,
	O,
	S,
	W
}	t_object;

typedef struct s_point
{
	int	row;
	int	col;
}	t_point;

typedef struct s_map
{
	char	**arr;
	int		rows;
	int		cols;
	int		p_count;
	int		e_count;
	int		c_count;
	int		exit_path;
	int		c_collect;
	t_point	start;
	t_point	end;
}	t_map;

typedef struct s_game
{
	t_map		*map;
	mlx_t		*mlx;
	mlx_image_t	**image;
	t_point		current;
	t_point		next;
	int			collect;
	int			move;
}	t_game;

char	*parsing(int ac, char **av);
void	initial_map(char *map_temp, t_map *map);
void	start_game(t_game *game);
void	load_image(t_game *game);
void	display_map(t_game *game, int row, int col);
void	player_move(t_game *game);
void	game_close(t_game *game, int stt);
void	game_message(const char *str, t_game *game);
void	game_error(const char *str, t_game *game);
void	error_message(char *str);
void	error_fd(char *str, int fd);
void	error_malloc(char *str, char *m1, char *m2, int fd);
void	map_error(char *str, t_map *map);

#endif
