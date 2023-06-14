/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 10:00:52 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* function that copies n characters from src to dest. 
*	The size of src is returned to know 
* if information has been lost.
**/
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	const char	*aux;

	aux = src;
	if (n > 0 && dest)
	{
		while (n > 1 && *aux)
		{
			*dest++ = *aux++;
			n--;
		}
		*dest++ = 0;
	}
	return (ft_strlen(src));
}
