# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 13:58:57 by saalamoo          #+#    #+#              #
#    Updated: 2022/12/21 15:29:44 by saalamoo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_put.c ft_print_hex.c ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

all: ${NAME}

clean:
	@$(RM) $(OBJS) 

fclean: clean
	@$(RM) $(NAME)

re: fclean all