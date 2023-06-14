/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:39:08 by casalced          #+#    #+#             */
/*   Updated: 2023/06/14 23:28:52 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_data *g_data;

void clear_mem(){
	rl_clear_history();
	free(g_data->prompt);
	free(g_data);
}

static void s_close(int signal){
	//printf("\nSignal: %d\n", signal);
	//printf("Exiting...\n");
	clear_mem();
	exit(signal);
}
/*
static void s_error(int signal){
	printf("Signal of memory error");
	//error("Error memory reciebe");
	signal++;
}*/

static void s_otherLine(int signal){
	rl_replace_line("", 1);
	printf("\n");
	rl_on_new_line();
	rl_redisplay();
	signal++;
}

static void s_nothing(int signal){
	//g_data->prompt = readline("prompt> ");
	printf("\n");
	rl_replace_line("", 1);
	rl_on_new_line();
	rl_redisplay();
	signal++;
}

static void entrada(){
		g_data->prompt = readline("minishell:> ");
		//control + D devuelve puntero nulo;
		if(!g_data->prompt){
			printf("\n");
			g_data->final = 0;
			clear_mem();
			exit(0);
		}
		else{
			add_history(g_data->prompt);
			//free(g_data->prompt);
		}
}

static void print_head(){
	printf("\t################################\n");
	printf("\t##         MINISHELL          ##\n");
	printf("\t################################\n");
}
	
int	main(int n_args, char **args, char **env){
	int		error;

	n_args++;n_args--;
	args++; args--;
	print_head();
	g_data = malloc(1 * sizeof(g_data));
	g_data->final = 1;
	g_data->env = env;
	//control de señales
	error = 0;
	signal(SIGKILL, s_close);
	signal(SIGTERM, s_close);
	signal(SIGQUIT, s_close);
	//signal(SIGSEGV, s_error); //manejar errores memoria
	signal(SIGINT, s_otherLine); //control + c
	signal(SIGTSTP, s_nothing); //control + z

	//bucle infinito de entrada de datos
	while(g_data->final){
		entrada();
		lexer(g_data);
	}
	printf("\n**Saliendo del bucle central**\n");


	return (error);
}
