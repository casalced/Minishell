/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/08/04 03:50:31 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**Funcion que modifica los primero n caractares de un array s 
generico con char c**/
void	*ft_memset(void *s, int c, size_t n)
{
	char	*aux;

	aux = s;
	while (n--)
	{
		*aux = c;
		aux++;
	}
	return (s);
}
