/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 12:03:50 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/25 12:41:22 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_parsing(int ac, char **av, t_game *game)
{
	if (ac != 2)
		ft_error("Wrong arguments", game);
	ft_game_name_check(av[1], game);
	//check file exist in folder by opening it
	//check map is suitable or not
}

void	ft_game_name_check(char *name, t_game *game)
{
	size_t	len;
	char	*ext;

	len = ft_strlen(name);
	ext = name[len - 4];
	if(ft_strncmp(ext, ".ber", 4) == 0)
		ft_error("Wrong game file name", game);
}
