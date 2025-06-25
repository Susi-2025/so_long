/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:27:00 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/25 20:32:14 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_game
{
}t_game;


void	ft_error(char *str, t_game *game);
void	ft_free(char **map);

void	ft_parsing(int ac, char **av, t_game *game);
//void	ft_game_name_check(char *name, t_game *game);
int		ft_open_file_check(char *name, t_game *game);
char	*ft_read_map(int fd, t_game *game);
char	**ft_init_map(char *map_temp, t_game *game);
void	ft_check_map(char **map, t_game *game);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_gnl(int fd);
char	*ft_strdup(const char *str);
char	**ft_split(char const *s, char c);
#endif
