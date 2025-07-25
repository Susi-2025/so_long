# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 14:34:01 by vinguyen          #+#    #+#              #
#    Updated: 2025/07/26 17:03:13 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC_DIR = .
OBJ_DIR = ./Object

LIBFT_DIR = ./libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

MLX42_DIR = ./MLX42
MLX42_LIB = $(MLX42_DIR)/build/libmlx42.a
MLX42_LINK_FLAGS = $(MLX42_LIB) -ldl -lglfw -pthread -lm
MLX42_FLAGS = -I$(MLX42_DIR)/include/

#Project file
SRC =	0_so_long.c \
		1_parsing.c \
		2_initial.c \
		3_start_game.c \
		3a_load_image.c \
		3b_display_map.c \
		3c_player_move.c \
		8_error_handle.c \
		9_game_err_handle.c \

OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(MLX42_LIB) $(LIBFT_LIB) $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(MLX42_FLAGS) -c $< -o $@

.SECONDARY: $(OBJ) $(LIBFT_OBJ)

$(MLX42_LIB):
	@echo "Cloning and building MLX42..."
	@if [ ! -d "$(MLX42_DIR)" ]; then \
		git clone https://github.com/codam-coding-college/MLX42.git $(MLX42_DIR); \
	fi
	@cmake -B $(MLX42_DIR)/build $(MLX42_DIR)
	@cmake --build $(MLX42_DIR)/build

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT_LIB) $(MLX42_LIB)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT_LIB) $(MLX42_LINK_FLAGS) -o $(NAME)
	@echo "so_long execution created"

#cleaning
clean:
	@rm -rf $(OBJ_DIR)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(MLX42_DIR)
	@$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
