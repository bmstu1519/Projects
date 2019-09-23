# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkarlene <kkarlene@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 15:15:02 by kkarlene          #+#    #+#              #
#    Updated: 2019/09/23 20:16:41 by kkarlene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h
NAME = libft.a
FILE_O = *.o
FILE_C = *.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(FILE_C) -I $(HEADER)
	ar rc $(NAME) $(FILE_O)

clean: 
	rm -f $(FILE_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
