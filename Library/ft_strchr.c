/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:07:20 by vinguyen          #+#    #+#             */
/*   Updated: 2025/06/28 11:51:43 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "library.h"

char	*ft_strchr(const char *s, int c)
{
	const char		*p;
	unsigned char	ch;

	p = s;
	ch = (unsigned char)c ;
	while (*p)
	{
		if (*p == ch)
			return ((char *)p);
		p++;
	}
	if (ch == '\0')
		return ((char *)p);
	return (NULL);
}
