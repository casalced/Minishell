/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 04:03:37 by casalced          #+#    #+#             */
/*   Updated: 2021/09/08 23:49:16 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/** Function that write the representation of a int in a file.
**/
void	ft_putnbr_fd(int n, int fd)
{
	char	*number;

	if (fd >= 0)
	{
		number = ft_itoa(n);
		ft_putstr_fd(number, fd);
		free(number);
	}	
}
