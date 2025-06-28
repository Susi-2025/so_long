/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 19:25:02 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/28 11:51:57 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "library.h"

char	*ft_strdup(const char *s)
{
	char				*out;
	char				*temp_in;
	unsigned int		i;

	i = 0;
	temp_in = (char *)s;
	while (temp_in[i])
		i++;
	out = malloc(i + 1);
	if (!out)
		return (0);
	i = 0;
	while (temp_in[i])
	{
		out[i] = temp_in[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
