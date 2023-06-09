NAME = minishell

MINISHELL = minishell

SRC_S = minishell.c

OBJS = ${SRC_S:.c=.o}

CC = gcc
CLIB = -g3
CFLAGS = -g3 -Werror -Wextra -Wall

all: ${NAME}

${MINISHELL}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${MINISHELL} -lreadline

bonus: all

BONUS: all

clean: 
	@echo Cleaning...
	rm -rf ${OBJS}

fclean:	clean
	rm -rf ${MINISHELL}

re: fclean all

.PHONY: re fclean clean all bonus BONUS 