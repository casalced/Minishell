/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:55:07 by casalced          #+#    #+#             */
/*   Updated: 2023/06/14 23:34:26 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char** get_attributes(char **att){

	return &att[1];
	
}

void exe_exit(){
	clear_mem();
	exit(0);
}

void single_command(t_data *g_data){
	t_command *comand;
	char **first_split;

	//separa la cadena en espacios
	first_split = ft_split(g_data->prompt, ' ');
	if(first_split){
		comand = malloc(1 * sizeof(t_command));
		comand->command = first_split[0];
		comand->attributes = get_attributes(first_split);
		comand->env = g_data->env;
		
		printf("Command: %s ", comand->command);
		printf("Attributes: %s ", comand->attributes[0]);
	//	printf("Options %s \n", comand->options[0]);
	printf("\n");
	if(comand->command != NULL){
	if(!ft_strncmp(comand->command, "exit", ft_strlen(comand->command)))
		exe_exit();
	else if(!ft_strncmp(comand->command, "echo", ft_strlen(comand->command)))
		exe_echo(comand);
	else if(!ft_strncmp(comand->command, "env", ft_strlen(comand->command)))
		exe_env(g_data);
	else if(!ft_strncmp(comand->command, "pwd", ft_strlen(comand->command)))
		exe_pwd();
	else if(!ft_strncmp(comand->command, "cd", ft_strlen(comand->command)))
		exe_cd(comand);
	}
	}

	
}


void pipex_command(t_data *g_data){
	printf("Pipex aren't implemented yet:\n\t %s\n", g_data->prompt);
}

/** Functions to manage the lexics and derivate to a built-in
 * functions, to system functions or pipex.
*/
int lexer(t_data *g_data){
	int rtn = 0;
	
	//printf("Data: %s \n", g_data->prompt);
	if(*g_data->prompt != 10){
	if(!ft_strchr(g_data->prompt, '|'))
		single_command(g_data);
	else
		pipex_command(g_data);
	}
	return rtn;
}

