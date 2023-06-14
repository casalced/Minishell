/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:23:48 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 10:02:59 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*#include <unistd.h>
#include <stdio.h>
*/
/**Funcion que reserva un espacio de memoria con malloc
 * e inicializa todo el espacio a ceros**/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rtn;

	rtn = 0;
	rtn = malloc(nmemb * size);
	if (rtn)
		ft_memset(rtn, 0, nmemb * size);
	return (rtn);
}
