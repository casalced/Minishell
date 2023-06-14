/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 01:38:33 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 19:34:29 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Function that return a pointer to new string where was aplied 
 * char(*F)(unsigned int, char) to each caracter of a original str s.
 **/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*aux;
	void				*origin_aux;
	unsigned int		i;

	i = 0;
	aux = 0;
	if (s)
		aux = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	origin_aux = aux;
	while (*s && aux && f && s)
	{
		*aux++ = (*f)(i++, *s++);
	}
	return (origin_aux);
}
