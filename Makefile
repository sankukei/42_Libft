# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leothoma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 00:54:02 by leothoma          #+#    #+#              #
#    Updated: 2024/11/19 00:54:02 by leothoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COMP = cc

FLAGS = -Wall -Wextra -Werror -I ./

SRC =	ft_isprint.c \
	ft_atoi.c \
	ft_isalnum.c \
	ft_memcpy.c \
	ft_strjoin.c \
	ft_strncmp.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_strchr.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strtrim.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_strrchr.c \
	ft_strlcat.c \
	ft_split.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c \
	ft_printf.c \
	printf_utils.c \
	get_next_line.c \
	get_next_line_utils.c \


OBJS = ${SRC:.c=.o}

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

${NAME}: ${OBJS}
	ar -rsc ${NAME} ${OBJS} && rm *.o

all: ${NAME}

clean:
	rm -f ${OBJS} 

fclean: clean;
	rm -f libft.a

re: fclean all
		
.PHONY: all, clean, fclean, re
