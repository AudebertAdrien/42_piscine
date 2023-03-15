# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 09:21:34 by aaudeber          #+#    #+#              #
#    Updated: 2022/11/20 18:11:06 by aaudeber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c \
      fts/fts_tests.c fts/ft_atoi.c fts/ft_split.c fts/ft_split2.c  \
      fts/fts_dico.c fts/fts_dico2.c fts/fts_globales.c \
      fts/fts_globales2.c fts/fts_print.c

CC = cc

CFLAGS= -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

all: $(NAME)

.c.o: 
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	@echo "Waiting..."

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Compiling.."

clean:
	@rm -f *.o */*.o
	@echo "clean all file.o"

fclean: clean
	@rm -f $(NAME)
	@echo "clean all files"

re: fclean all
