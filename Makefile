# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmidi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 14:40:16 by mahmidi           #+#    #+#              #
#    Updated: 2019/10/17 16:27:32 by mahmidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.c

NAME = libft.a
FLAGS = -Wall -Wextra -Werror

$(NAME) : all

all:
	gcc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) \
		*.o
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f libft.a

re: fclean all


