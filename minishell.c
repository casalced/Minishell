/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:39:08 by casalced          #+#    #+#             */
/*   Updated: 2023/06/09 09:53:23 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static t_data* g_data;

static void clear_mem(){
	rl_clear_history();
	free(g_data);
}

static void s_close(int signal){
	printf("\nSignal: %d\n", signal);
	printf("Exiting...\n");
	clear_mem();
	exit(signal);
}

static void s_nothing(int signal){
	signal++;
}

static void s_otherLine(int signal){
	printf("\n");
	g_data->prompt = readline("prompt:>");
	signal++;
}


int	main(int n_args, char **args, char **env){
	int		error;
	int 	con = 0;
	
	g_data = malloc(1 * sizeof(g_data));
	g_data->final = 1;
	//control de señales
	error = 0;
	signal(SIGKILL, s_close);
	signal(SIGTERM, s_close);
	signal(SIGQUIT, s_close);
	signal(SIGINT, s_otherLine); //control + c
	signal(SIGTSTP, s_nothing); //control + z

	printf("Num args: %d\t|", n_args);
	printf("Listando argumentos de entrada\n");
	while(con < n_args){
		printf("%d\t%s\n", con, args[con]);
		con++;
	}

	con = 0;
	printf("\n\n\n********************************\n");
	printf("Listando variables de entorno:\n\n");
	printf("********************************\n");
	
	while(env[con] != NULL){
		printf("%d\t%s\n",con, env[con]);
		con++;
	}
 	printf("********************************\n\n");


	//bucle infinito de entrada de datos
	while(g_data->final){
		rl_redisplay();
		g_data->prompt = readline("prompt:>");
		//control + D devuelve puntero nulo;
		if(!g_data->prompt){
			printf("\n");
			g_data->final = 0;
			clear_mem();
			exit(10);
		}
		else{
			add_history(g_data->prompt);
		free(g_data->prompt);}
	}	

	printf("\n**Saliendo**\n");


	return (error);
}
