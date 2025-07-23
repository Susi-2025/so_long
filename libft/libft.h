/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:27:00 by vinguyen          #+#    #+#             */
/*   Updated: 2025/07/23 14:11:44 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

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

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr, char *base, int i);
int		ft_putnbr_base(long long number, char *base, int i);
int		ft_putnbr_base_unsigned(unsigned long long number, char *base, int i);
int		check_format(va_list args, const char *string, int i);
int		check_string(va_list args, const char *string, int i);
int		ft_printf(const char *string, ...);
#endif
