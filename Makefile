# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcharlet <lcharlet@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/27 16:35:40 by lcharlet          #+#    #+#              #
#    Updated: 2021/04/27 19:43:21 by lcharlet         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC := src/ft_memset.c \
src/ft_bzero.c \
src/ft_memcpy.c \
src/ft_memccpy.c \
src/ft_memmove.c \
src/ft_memchr.c \
src/ft_memcmp.c \
src/ft_strlen.c \
src/ft_strlcpy.c \
src/ft_strlcat.c \
src/ft_strchr.c \
src/ft_strrchr.c \
src/ft_strnstr.c \
src/ft_strncmp.c \
src/ft_atoi.c \
src/ft_isalpha.c \
src/ft_isdigit.c \
src/ft_isalnum.c \
src/ft_isascii.c \
src/ft_isprint.c \
src/ft_toupper.c \
src/ft_tolower.c \
src/ft_calloc.c \
src/ft_strdup.c \
src/ft_substr.c \
src/ft_strjoin.c \
src/ft_strtrim.c \
src/ft_split.c \
src/ft_itoa.c \
src/ft_strmapi.c \
src/ft_putchar_fd.c \
src/ft_putstr_fd.c \
src/ft_putendl_fd.c \
src/ft_putnbr_fd.c \
OBJ = $(SRC:.c=.o)
NAME := libft.a
CFLAGS := -Werror -Wall -Wextra -c
LFLAGS := -Werror -Wall -Wextra -o
CC := gcc
RM := rm -rf

all:
	$(CC) $(SRC)
# проверить
clean:
	$(RM)*.o


