# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:16:05 by ggalon            #+#    #+#              #
#    Updated: 2023/11/11 20:21:13 by ggalon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_putptr.c ft_puthexlowernbr.c ft_puthexuppernbr.c ft_strchr.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

INCL = ft_printf.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $(OBJS)

%.o: %.c $(INCL) $(MAKE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re