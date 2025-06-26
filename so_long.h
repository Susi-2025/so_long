/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:27:00 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/26 18:55:41 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_game
{
	void	*mlx;
	void	*win;
}	t_game;

void	ft_error_map(char *str, char **map, t_game *game);
void	ft_error_malloc(char *str, char *m1, char *m2, t_game *game);
void	ft_error(char *str, t_game *game);
void	ft_free_map(char **map);

char	**ft_parsing(int ac, char **av, t_game *game);
int		ft_open_file_check(char *name, t_game *game);
char	*ft_read_map(int fd, t_game *game);
void	ft_check_empty(char *map_read, t_game *game);
char	**ft_init_map(char *map_temp, t_game *game);

void	ft_check_map(char **map, t_game *game);
void	ft_check_rec(char **map, t_game *game);
void	ft_check_row(char **map, t_game *game);
void	ft_check_col(char **map, t_game *game);
void	ft_check_content(char **map, t_game *game);
void	ft_check_inside(char **map, t_game *game);
void	ft_check_ep(char **map, t_game *game);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_gnl(int fd);
char	*ft_gnl_assign(char *buffer, int fd);
char	*ft_strdup(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
#endif
