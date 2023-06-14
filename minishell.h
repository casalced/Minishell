/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:42:28 by casalced          #+#    #+#             */
/*   Updated: 2023/06/13 19:39:51 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MINISHELL_H
# define MINISHELL_H

# define _GNU_SOURCE
# define _POSIX_SOURCE
//# define _POSIX_SOURCE >=199309L
//# define _POSIX_C_SOURCE

# include <sys/types.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <signal.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

//Definicion de comando
typedef struct s_command
{
	char * command;
	char ** attributes;
	char ** options;
	char ** env;
} t_command;

//Datos globales del programa
typedef struct s_data
{
	int my_pid;
	int	final;
	char *prompt;
	char **env;
	t_command** commands;
} t_data;


//minishell.c
//static void entrada();
//static void s_nothing(int signal);
//static void s_otherLine(int signal);
//static void s_close(int signal);
//static void clear_mem();

//lexer.c
int lexer(t_data *g_data);



#endif
