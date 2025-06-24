# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/24 13:48:38 by vinguyen          #+#    #+#              #
#    Updated: 2025/06/24 14:25:52 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=so_long

LIBFT=./library/Libft/libft.a

CC=cc

CFLAGS=-Wall -Werror -Wextra
MLX_FLAGS=-lmlx -lXext -lX11

VALGRIND=@valgrind --leak-check=full --show-leak-kinds=all

REMOVE=rm -f

SRCS_DIR=./sources/
OBJ_DIR=./obj/

SRCS=	so_long.c
SRCS_PATH=$(addprefix $(SRCS_DIR), $(SRCS))
OBJS=$(patsubst $(SRCS_DIR)%.c, $(OBJ_DIR)%.o, $(SRCS_PATH))

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MLX_FLAGS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C ./library/Libft

clean: 
	make clean -C ./library/Libft
	$(REMOVE) $(OBJS)

fclean: clean
	make fclean -C ./library/Libft
	$(REMOVE) $(NAME)

re: fclean all

run: $(NAME)
	$(VALGRIND) ./$(NAME) assets/maps/valid/map.ber

.PHONY: all clean fclean run
