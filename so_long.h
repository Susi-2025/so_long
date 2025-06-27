/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:27:00 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/27 20:57:35 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
//# include "MLX42.h"

typedef struct s_point
{
	int	row;
	int col;
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
//	mlx_t		*mlx;
//	mlx_image_t	**image;
}	t_game;


//void	ft_error_map(char *str, char **map);
//void	ft_error_malloc(char *str, char *m1, char *m2);
//void	ft_error(char *str);
//void	ft_free_map(char **map);
void	par_error(char *str);
void	par_fd_error(char *str, int fd);
void	par_error_malloc(char *str, char *m1, char *m2, int fd);
void	map_error(char *str, t_map *map);

char	*parsing(int ac, char **av);
int		par_valid_name(char *name);
char	*par_read_map(int fd);
void	par_empty_line(char *map_read);

void	initial_map(char *map_temp, t_map *map);

void	ft_bzero(void *s, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_gnl(int fd);
char	*ft_gnl_assign(char *buffer, int fd);
char	*ft_strdup(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
void	ft_free_triptr(char ***str);
void	*ft_calloc(size_t nmemb, size_t size);
char	**ft_matrix_dup(char **matrix, int row);
#endif
