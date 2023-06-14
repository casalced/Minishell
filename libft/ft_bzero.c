/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 10:02:00 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
#include <ctype.h>
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*aux;

	aux = s;
	while (n > 0)
	{
		*aux = '\0';
		aux++;
		n--;
	}
}
