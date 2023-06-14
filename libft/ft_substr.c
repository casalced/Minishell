/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 04:17:40 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 09:15:31 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Function that return a substring of s from start to 
 * start + len
 **/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	i = 0;
	rtn = 0;
	if (s)
	{
		if (len > ft_strlen(s) - start)
			len = ft_strlen(s) - start;
		if (start > ft_strlen(s))
			len = 0;
	}		
	rtn = ft_calloc(len + 1, sizeof(char));
	if (rtn && len && (start < ft_strlen(s)) && s)
	{
		s = s + start;
		while (*s && i < len)
		{
			*rtn++ = *s++;
			i++;
		}
		rtn = rtn - i;
	}
	return (rtn);
}
