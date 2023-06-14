# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/11 19:53:16 by casalced          #+#    #+#              #
#    Updated: 2021/09/15 20:45:03 by casalced         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAME_BONUS = libft_bonus.a

CC = gcc 

CFLAGS = -Wextra -Werror -Wall

SRCS = ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_atoi.c ft_bzero.c \
		ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
		ft_strchr.c ft_strrchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_split.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

OBJS = ${SRCS:.c=.o}

BONUS_LIST = ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c \
		ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c ft_lstdelone_bonus.c

OBJS_BONUS = ${BONUS_LIST:.c=.o}

all: ${NAME}

${NAME_BONUS}: ${OBJS_BONUS} ${OBJS}
	ar rcs ${NAME_BONUS} ${OBJS_BONUS} ${OBJS}
	cp -f ${NAME_BONUS} ${NAME}
	ranlib ${NAME} 


bonus: ${NAME_BONUS}
	
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS} 
	ranlib ${NAME}

clean :
	rm -f ${OBJS} ${OBJS_BONUS}

fclean : clean
	rm -f ${NAME}
	rm -f ${NAME_BONUS}
	rm -rf .vscode
	rm -f a.out

re:	fclean all

so:
	$(CC) -nostartfiles -fPIC ${SRCS} ${BONUS}
	gcc -nostartfiles -shared -o libft.so ${OBJS} ${OBJS_BONUS}

.PHONY: all clean fclean bonus