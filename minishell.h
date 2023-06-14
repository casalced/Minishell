/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:42:28 by casalced          #+#    #+#             */
/*   Updated: 2023/06/13 16:05:00 by casalced         ###   ########.fr       */
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

typedef struct s_data
{
	int	final;
	char *prompt;
} t_data;

//minishell.c
static void entrada();
static void s_nothing(int signal);
static void s_otherLine(int signal);
static void s_close(int signal);
static void clear_mem();

//lexer.c




#endif
