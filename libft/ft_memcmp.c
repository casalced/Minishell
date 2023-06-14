/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/06 11:38:08 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Function that compare two spaces of memory s1 and s2 of 
 * size n
 **/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char		*cs1;
	unsigned const char		*cs2;

	cs1 = s1;
	cs2 = s2;
	if (n != 0)
	{
		while (n)
		{
			if (*cs1 != *cs2)
				return ((unsigned char)*cs1 - (unsigned char)*cs2);
			cs1++;
			cs2++;
			n--;
		}
	}
	return (0);
}
