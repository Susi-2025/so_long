/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:27:00 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/25 12:47:34 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdlib.h>
#include <stdio.h>

typedef struct s_game
{
}t_game;


void	ft_error(char *str, t_game *game);
void	ft_parsing(int ac, char **av, t_game *game);
void	ft_game_name_check(char *name, t_game *game);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
#endif
