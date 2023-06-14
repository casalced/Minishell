/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 22:29:42 by casalced          #+#    #+#             */
/*   Updated: 2023/06/14 23:48:23 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void exe_cd(t_command *comand){
	char *buf;

	buf = malloc(1000 * sizeof(char));
	if(!chdir(*comand->attributes)){
		printf("cwd: %s\n",getcwd(buf, 1000));
		
	}	
	else
		perror("Error");
	free(buf);
}