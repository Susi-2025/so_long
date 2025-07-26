# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 10:57:16 by vinguyen          #+#    #+#              #
#    Updated: 2025/07/26 16:53:07 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJ_DIR = Obj

SRC = ft_bzero.c \
       ft_calloc.c \
       ft_free_triptr.c \
       ft_gnl.c \
       ft_matrix_dup.c \
       ft_printf.c \
       ft_putchar.c \
       ft_putnbr_base.c \
       ft_putnbr_base_unsigned.c \
       ft_putptr.c \
       ft_putstr.c \
       ft_split.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_strjoin.c \
       ft_strlen.c \
       ft_strncmp.c


OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -rf $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
