/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:32:35 by casalced          #+#    #+#             */
/*   Updated: 2023/06/14 12:03:22 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void exe_echo(t_command *comand){
	int n;

	n = 0;
	if(comand->attributes[0]){
	if(!ft_strncmp(comand->attributes[0], "-n", ft_strlen(comand->attributes[0]))){
		n = 1;
		comand->attributes++;
	}
	while(*comand->attributes){
		printf("%s", *comand->attributes);
		comand->attributes++;
		if(*comand->attributes)
				printf(" ");
	}

	if(!n)
	printf("\n");
	}
	
}