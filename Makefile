NAME = minishell

MINISHELL = minishell

LIBFT = libft.a

SRC_S = minishell.c\
		lexer.c\
		echo.c\
		env.c\
		pwd.c\
		cd.c\

OBJS = ${SRC_S:.c=.o}

CC = gcc
CLIB = -g3
CFLAGS = -g3 -Werror -Wextra -Wall

all: ${LIBFT}
	make name

name: ${MINISHELL}

${MINISHELL}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${MINISHELL} -lreadline -L./libft -lft

${LIBFT}:
	cd libft; make all;


bonus: all

BONUS: all

clean: 
	@echo Cleaning...
	rm -rf ${OBJS}
	cd libft; make clean;

fclean:	clean
	rm -rf ${MINISHELL}
	cd libft; make fclean;

re: fclean all

.PHONY: re fclean clean all bonus BONUS name 