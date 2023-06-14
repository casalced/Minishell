/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 10:02:09 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
#include <ctype.h>
*/
#include "libft.h"

/**
 * Function that copy src on dest with control of overlay
 **/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*aux;

	d = dest;
	aux = src;
	if ((dest && !src) || (!dest && src) || (dest && src))
	{
		if (d < aux)
			while (n--)
				*d++ = *aux++;
		else
		{
			d = dest + (n - 1);
			aux = src + (n - 1);
			while (n--)
				*d-- = *aux--;
		}
	}
	return (dest);
}
