/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 05:08:09 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 15:14:23 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static char	*final(void *rtn)
{
	char	*aux;

	aux = ft_strdup((char *)rtn);
	return (aux);
}

static char	*process(char *rtn, long int aux_n, int n)
{
	rtn = rtn + 23;
	if (!aux_n)
	{
		*rtn = 48;
	}
	while (aux_n != 0)
	{
		rtn--;
		*rtn = (aux_n % 10) + 48;
		aux_n = aux_n / 10;
	}
	if (n < 0)
	{
		rtn--;
		*rtn = '-';
	}
	return (final(rtn));
}

/**
 * Function that return a char string representation of a int n
 */
char	*ft_itoa(int n)
{
	long int	aux_n;
	char		*rtn;
	char		*aux;

	rtn = 0;
	aux = 0;
	aux_n = n;
	if (n < 0)
		aux_n = -1 * aux_n;
	rtn = ft_calloc(25, sizeof(char));
	if (rtn)
	{
		aux = process(rtn, aux_n, n);
		free(rtn);
	}
	return (aux);
}
