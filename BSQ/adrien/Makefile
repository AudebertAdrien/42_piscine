# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 09:21:34 by aaudeber          #+#    #+#              #
#    Updated: 2022/11/22 18:13:39 by aaudeber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRC_DIR := srcs

SRC_FILES := $(wildcard $(SRC_DIR)/*.c) main.c

CC = cc

CFLAGS= -Wall -Werror -Wextra

OBJ = $(SRC_FILES:.c=.o)

all: $(NAME)

.c.o: 
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	@echo "Waiting..."

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) \
		&& rm -f *.o */*.o
	@echo "Compiling.."

clean:
	@rm -f *.o */*.o
	@echo "clean all file.o"

fclean: clean
	@rm -f $(NAME)
	@echo "clean all files"

re: fclean all
