# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 12:24:44 by bguyot            #+#    #+#              #
#    Updated: 2021/12/01 12:24:46 by bguyot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = do_op.c op.c
OBJ = do_op.o op.o
LIB = -L. -lftnocheat

all:
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror $(OBJ) $(LIB) -o do-op

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f do-op
