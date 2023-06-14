/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:55:07 by casalced          #+#    #+#             */
/*   Updated: 2023/06/13 19:43:15 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/** Functions to manage the lexics and derivate to a built-in
 * functions, to system functions or pipex.
*/
int lexer(t_data *g_data){
	int rtn = 0;
	char **first_split;
	t_command *comand;
	
	printf("Data: %s \n", g_data->prompt);
	first_split = ft_split(g_data->prompt, ' ');
	if(first_split){
		comand = malloc(1 * sizeof(t_command));
		comand->command = first_split[0];
		comand->env = g_data->env;
		printf("Command: %s ", comand->command);
	//	printf("Attributes: %s ", comand->attributes[0]);
	//	printf("Options %s \n", comand->options[0]);
	printf("\n");
	}

	return rtn;
}

