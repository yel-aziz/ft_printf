# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 19:06:09 by yel-aziz          #+#    #+#              #
#    Updated: 2021/11/29 16:52:59 by yel-aziz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_putchar.c \
	    ft_printhex.c \
            ft_putnbr_base.c \
                ft_putnbr.c \
                    ft_puthex.c \
                        ft_putstr.c \
                            ft_putnbrunsi.c \
	                            ft_printf.c \
         				             ft_puthexup.c

OBJET = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

$(NAME) : $(OBJET) ft_printf.h
	ar rcs $(NAME) $(OBJET)

all : $(NAME)

clean :
	rm -rf $(OBJET)

fclean : clean
	 rm -rf $(NAME)

re : fclean all
