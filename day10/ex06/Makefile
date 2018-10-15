# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mputra <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 11:15:45 by mputra            #+#    #+#              #
#    Updated: 2018/09/03 17:25:43 by mputra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = do-op
EXE = do-op
SRC = main.c operator.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(PROG)

$(PROG):
	@ $(CC) $(CFLAGS) $(SRC) -o $(EXE)

clean:
	@ /bin/rm -f $(OUT)

fclean: clean
	@ /bin/rm -f $(OUT)

re: clean all
