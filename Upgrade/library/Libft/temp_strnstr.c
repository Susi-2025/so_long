/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:17:31 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/29 10:13:19 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big1;
	char	*little1;

	i = 0;
	j = 0;
	big1 = (char *)big;
	little1 = (char *)little;
	if (little1[i] == '\0')
		return (&big1[i]);
	if (len == 0)
		return (NULL);
	while (big1[i] && (i < len))
	{
		if (big1[i] == little1[j])
		{
			while ((big1[i + j] == little1[j]) && little1[j] && ((i + j) < len))
				j++;
			if (little1[j] == '\0')
				return (&big1[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
