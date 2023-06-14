/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 20:28:29 by casalced          #+#    #+#             */
/*   Updated: 2023/06/14 23:11:33 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void exe_pwd(){
	char *buf;

	buf = malloc(1000 * sizeof(char));
	//printf("%s\n", getenv("PWD"));
	printf("%s\n", getcwd(buf, 1000));
	free(buf);
}