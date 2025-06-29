# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 14:34:01 by vinguyen          #+#    #+#              #
#    Updated: 2025/06/29 19:24:39 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC_DIR = .
LIB_DIR = Library
OBJ_DIR = Object
MLX42_DIR = ./MLX42

#Library files
LIB_NAME = $(LIB_DIR)/library.a
LIB_SRC = $(wildcard $(LIB_DIR)/*.c)
LIB_OBJ = $(LIB_SRC:.c=.o)
MLX42 = $(MLX42_DIR)/build/libmlx42.a

#Project file
SRC =	so_long.c \
		parsing.c \
		error_handle.c \
		initial.c \
		start_game.c \
		load_image.c \
		display_map.c \
		player_move.c \
		game_err_handle.c \

OBJ = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRC))

# Compiler
CC = cc
CFLAGS = -Wall -Werror -Wextra
MLX42_FLAGS = -ldl -lglfw -pthread -lm
INCLUDES = -I./MLX42/include/MLX42

# Rules
all: $(OBJ_DIR) $(LIB_NAME) $(NAME)

# Object directory create
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Build library
$(LIB_NAME): $(LIB_OBJ)
	ar rcs $@ $^

#Compile library object files
$(LIB_DIR)/%.o: $(LIB_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
	
#Compile project object files into Object
$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	
# Build final executable
$(NAME) : $(OBJ) $(LIB_NAME)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) $(LIB_NAME) $(MLX42) $(MLX42_FLAGS) -o $(NAME)

$(MLX42): .mlx42
.mlx42: 
	@$(RM) $(MLX42_DIR)
	@git clone https://github.com/codam-coding-college/MLX42.git $(MLX42_DIR)
	@cd $(MLX42_DIR) && mkdir -p build && cd build && cmake .. && cmake --build . -j4
	@cd ..
	@$(RM) $(MLX42_DIR)/.git
	@touch .mlx42

#cleaning
clean:
	rm -rf $(OBJ_DIR)
	rm -f $(LIB_OBJ)

fclean: clean
	rm -f $(NAME) $(LIB_NAME)

re: fclean all
