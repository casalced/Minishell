/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/08/11 06:57:55 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * The memchr() function scans the initial n  bytes  of  the  memory
   area pointed to by s for the first instance of c.  Both c and the
   bytes of the memory area pointed to by s are interpreted  as  un‐
   signed char.
 **/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*rtn;
	unsigned char	*aux;

	rtn = 0;
	aux = (unsigned char *)s;
	while (rtn == 0 && n > 0)
	{
		if (*aux == (unsigned char)c)
			rtn = aux;
		aux++;
		n--;
	}
	return (rtn);
}
