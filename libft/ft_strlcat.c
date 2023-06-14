/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 04:14:27 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 16:22:48 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen && *s)
	{
		len ++;
		s++;
	}	
	return (len);
}

/**
 *  Function concat src to dest. the new dest string can
 *  not be more leng than n. * if n is less than length 
 * of dest do nothing. Always return length src + leng dst.
 * New str always null terminated at n+1.
 **/

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int		rtn;
	size_t	lmt;

	rtn = ft_strnlen(dest, n) + ft_strlen(src);
	lmt = ft_strlen(dest);
	dest = dest + lmt;
	while (*src && n > lmt + 1)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = 0;
	return (rtn);
}
