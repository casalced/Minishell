/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:04:56 by casalced          #+#    #+#             */
/*   Updated: 2023/06/15 00:24:35 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void exe_env(t_data *g_data){
	char **aux;
	aux = g_data->env;
	while(*aux)
		printf("%s\n", *aux++);
}