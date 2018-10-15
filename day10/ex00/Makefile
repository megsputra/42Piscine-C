# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mputra <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 10:08:41 by mputra            #+#    #+#              #
#    Updated: 2018/09/03 16:44:49 by mputra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
LIB = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
		srcs/ft_strlen.c srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCLUDES = includes/
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

all: $(LIB)

$(LIB):
	$(CC) $(CFLAGS) ./srcs/ft_*.c -I $(INCLUDES)
	an rc $(LIB) $(OBJ)
	ranlib $(LIB)

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(LIB)

re: fclean all
