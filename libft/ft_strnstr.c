/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 03:34:07 by casalced          #+#    #+#             */
/*   Updated: 2021/09/08 15:09:23 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Function that return a pointer 
 * in the first occurrence of little in the n first
 * bytes of big.
 **/
char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	const char	*rtn;

	rtn = 0;
	if (!*little)
		rtn = big;
	while (*big && (ft_strlen(little) <= n) && !rtn)
	{
		if (!ft_strncmp(big, little, ft_strlen(little)))
			rtn = big;
		big ++;
		n--;
	}
	return ((char *)rtn);
}
