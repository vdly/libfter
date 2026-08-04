# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodehii <jodehii@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/27 12:22:14 by jodehii           #+#    #+#              #
#    Updated: 2026/07/28 16:22:16 by jodehii          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
ARC		= ar -acs

SRCS	=	ft_strlen.c \
			ft_
OBJ		= $(SRCS.c=.o)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

