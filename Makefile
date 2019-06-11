# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmolaodi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/11 11:15:35 by lmolaodi          #+#    #+#              #
#    Updated: 2019/06/11 12:25:51 by lmolaodi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
OBJ = *.o
HEADER = libft.h
NORM = -Wall -Werror -Wextra
all: $(NAME)
$(NAME):
	gcc -c $(NORM) $(SRC)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f *.o
fclean: clean
	rm -f libft.a
re: fclean all
