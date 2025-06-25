/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:52:30 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/25 16:17:11 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_gnl(int fd)
{
	char	*buffer;
	char	c;
	int		i;
	int		byte;

	if (fd < 0)
		return (NULL);
	buffer = (char *)malloc(1000000);
	if (!buffer)
		return (NULL);
	byte = read(fd, &c, 1);
	i = 0;
	while (byte > 0)
	{
		buffer[i] = c;
		i++;
		if (c == EOF || c == '\n')
			break;
		byte = read(fd, &c, 1);
	}
	if (i == 0 || byte < 0)
	{
		free (buffer);
		return (NULL);
	}
	buffer[i] = '\0';
	return (buffer);
}
