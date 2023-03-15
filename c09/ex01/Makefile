# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 09:21:34 by aaudeber          #+#    #+#              #
#    Updated: 2022/11/24 09:53:37 by aaudeber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c

DEPS = includes/

CC = gcc

AR = ar rc

CFLAGS= -Wall -Wextra -Werror

OBJS = $(addprefix srcs/, $(SRCS:.c=.o))

all: $(NAME)

.c.o: 
	$(CC) $(CFLAGS) -c -I.$(DEPS) $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	 ar -rcs $@ $^

clean:
	rm -f *.o */*.o

fclean: clean
	rm -f $(NAME)

re: fclean all
