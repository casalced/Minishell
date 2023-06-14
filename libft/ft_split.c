/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 00:36:27 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 15:15:24 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**init_pointers(char *aux, char **rtn, char c)
{
	if (*aux != c)
	{
		*rtn = aux;
		rtn++;
	}
	return (rtn);
}

static char	**protect_items(char **reset, char *aux, char c, const char *str)
{
	int		i;
	char	**aux_reset;

	i = 0;
	if ((!c && ft_strlen(str)))
	{
		*reset = (char *)str;
	}	
	while (reset[i])
		i++;
	aux_reset = ft_calloc(i + 1, sizeof(char *));
	while (aux_reset && *reset)
		*aux_reset++ = ft_strdup(*reset++);
	if (aux_reset)
	{
		reset = reset - i;
		aux_reset = aux_reset - i;
	}	
	if (aux)
		free(aux);
	if (reset)
		free(reset);
	return (aux_reset);
}

/**
 * Function that return substrings of str delimited by c.
 **/
char	**ft_split(char const *str, char c)
{
	char	*aux;
	char	**rtn;
	char	**reset;
	void	*reset_aux;

	rtn = ft_calloc(1000, sizeof(char *));
	reset = rtn;
	reset_aux = 0;
	if (rtn && str && c && ft_strlen(str))
	{
		aux = ft_strdup(str);
		reset_aux = aux;
		rtn = init_pointers(aux, rtn, c);
		while (ft_strchr(aux, c))
		{
			aux = ft_strchr(aux, c);
			*aux++ = 0;
			if (*aux != c && *aux)
			{
				*rtn = aux;
				rtn++;
			}
		}
	}
	return (protect_items(reset, reset_aux, c, str));
}
