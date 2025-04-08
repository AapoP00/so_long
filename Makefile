# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apuisto <apuisto@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 12:48:10 by apuisto           #+#    #+#              #
#    Updated: 2025/04/08 12:48:12 by apuisto          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRC_DIR = src/
SRC_FILES = $(addprefix $(SRC_DIR), $(SRC))

OBJS = $(SRC_FILES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror  -Wextra
INCLUDE = -I include
RM = rm -rf

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = so_long.c \

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	@make -C libft
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) $(LIBFT) $(MLX) $(MLXFLAGS) -o $(NAME)

clean:
	@make clean -C $(LIBFT_DIR)
	rm -f $(OBJS) 

fclean:
	rm  -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re