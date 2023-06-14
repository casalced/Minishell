/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 03:49:14 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 10:00:40 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * Function that write a string in the file with file descritor fd
 * */
void	ft_putstr_fd(char *s, int fd)
{
	while (s && *s && fd)
	{
		write(fd, &*s, sizeof(char));
		s++;
	}
}
