# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shokahn <shokahn@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 16:01:24 by mnirska           #+#    #+#              #
#    Updated: 2025/05/14 01:16:07 by shokahn          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = \
	ft_printf.c ft_printchar.c ft_printstr.c ft_printptrhex.c ft_printnbr.c \
	ft_printunsigned.c ft_printhexlow.c ft_printhexup.c
CC = cc
FLAGS = -Wall -Werror -Wextra
LIBC = ar rc
RM = rm -f
NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I.

${NAME}: ${OBJS}
	@${LIBC} ${NAME} ${OBJS}
	
clean:
	@${RM} ${OBJS} 
	
fclean: clean
	@${RM} ${NAME}
	
re: fclean all

.PHONY: all bonus clean fclean re