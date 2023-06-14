/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 10:00:58 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Function that returns the comparation of two string s1 and s2. If 
* str are equals returns 0, if not return char s1- char s2 at position
* of the diference.
 **/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	rtn;

	rtn = 0;
	if (n > 0)
	{
		while (s1 && s2 && *s1 && *s2 && n > 1 && (*s1 == *s2))
		{
			s1++;
			s2++;
			n--;
		}
		rtn = (unsigned char) *s1 - (unsigned char) *s2;
	}
	return (rtn);
}
