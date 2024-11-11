NAME = libft.a

COMP = cc

FLAGS = -Wall -Wextra -Werror -I ./

SRC = ft_isprint.c

OBJS = ${SRC:.c=.o}

.c.o:
	${COMP} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar -rsc ${NAME} ${OBJS} 

all: ${NAME}

clean:
	rm ${OBJS} libft.a

.PHONY: all
