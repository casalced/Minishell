/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/13 23:12:44 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
**The  memcpy()  function  copies n bytes from memory area src to memory areas
**   dest.  The memory areas must not overlap.
 **/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*aux;

	d = dest;
	aux = src;
	if ((dest && src) || (dest && !src) || (!dest && src))
	{
		while (n--)
			*d++ = *aux++;
	}
	return (dest);
}
