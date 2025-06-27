# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <vinguyen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/17 14:34:01 by vinguyen          #+#    #+#              #
#    Updated: 2025/06/27 20:14:05 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC =	so_long.c \
		so_long_utils.c \
		parsing.c \
		par_error.c \
		initial.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strjoin.c \
		ft_gnl.c \
		ft_strdup.c \
		ft_split.c \
		ft_strchr.c \
		ft_bzero.c \
		ft_free_triptr.c \
		ft_calloc.c \
		ft_matrix_dup.c \


OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(MLX42): .mlx42
.mlx42: 
	@$(RM) $(MLX42_DIR)
	@git clone https://github.com/codam-coding-college/MLX42.git $(MLX42_DIR)
	@cd $(MLX42_DIR) && mkdir -p build && cd build && cmake .. && cmake --build . -j4
	@cd ..
	@$(RM) $(MLX42_DIR)/.git
	@touch .mlx42

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
