/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 09:48:53 by vinguyen          #+#    #+#             */
/*   Updated: 2025/04/22 11:26:08 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	check_is_sub(char *str, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	pos;

	i = 0;
	j = 0;
	pos = 0;
	while (str[i])
	{
		if (str[i] == set[j])
		{
			while ((str[i + j] == set[j]) && set[j])
				j++;
			if (set[j] == '\0')
				pos++;
		}
		j = 0;
		i++;
	}
	return (pos);
}

char    *ft_out(char *str, char const *set)
{
    unsigned int    len_str;
    unsigned int    len_set;
	unsigned int	pos;
    char            *out;

    len_str = 0;
    len_set = 0;
    while (str[len_str])
        len_str++;
	while (set[len_set])
        len_set++;
	pos = check_is_sub (str, set);
    out = (char *)malloc (len_str - (pos * len_set) + 1);
    return (out);
}

char   *trim(unsigned int i, unsigned int j, unsigned k, char *out, char *str, char const *set)
{
    while (str[i])
    {
        if (str[i] != set[j])
		{
			out[k] = str[i];
			k++;
		}
		else
        {
            while ((str[i + j] == set[j]) && set[j])
                j++;
            if (set[j] == '\0')
                i = i + j - 1;
			else
			{
				out[k] = str[i];
				k++;
			}
			j = 0;
        }
        i++;
    }
	out[k] = '\0';
    return (out);
}


char	*ft_strtrim(char const *str, char const *set)
{
	char			*str_temp;
	char			*out;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	str_temp = (char *)str;
	out = ft_out(str_temp, set);
	if(!out)
		return (0);
	out = trim(i, j, k, out, str_temp, set);
/*	while (str_temp[i])
	{
		if (str_temp[i] != set[j])
		{
			out[k] = str_temp[i];
			k++;
		}
		else
		{
			while ((str_temp[i + j] == set[j]) && set[j])
				j++;
			if (set[j] == '\0')
				i = i + j - 1;
			else
			{
				out[k] = str_temp[i];
				k++;
			}
			j = 0;
		}
		i++;
	}
	out[k] = '\0';
*/
	return (out);
}
