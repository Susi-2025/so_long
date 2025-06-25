# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 14:34:01 by vinguyen          #+#    #+#              #
#    Updated: 2025/06/25 19:07:14 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC =	so_long.c \
		so_long_utils.c \
		ft_parsing.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strjoin.c \
		ft_gnl.c \
		ft_strdup.c \
		ft_split.c
		
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
