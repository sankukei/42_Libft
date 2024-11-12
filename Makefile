NAME = libft.a

COMP = cc

FLAGS = -Wall -Wextra -Werror -I ./

SRC =	ft_isprint.c \
	ft_atoi.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_strjoin.c \
	ft_strncmp.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_strchr.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_calloc.c \
	ft_isascii.c \
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

OBJS = ${SRC:.c=.o}

.c.o:
	${COMP} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar -rsc ${NAME} ${OBJS} 

all: ${NAME}

clean:
	rm ${OBJS}
fclean:
	rm ${OBJS} libft.a

.PHONY: all
