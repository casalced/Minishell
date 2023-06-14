/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 03:49:14 by casalced          #+#    #+#             */
/*   Updated: 2021/08/13 06:54:20 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Function that write a string in the file with file descritor fd
 * and the final line.
 **/
void	ft_putendl_fd(char *s, int fd)
{
	char	endl;

	endl = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &endl, sizeof(char));
}
