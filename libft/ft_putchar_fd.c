/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 03:38:21 by casalced          #+#    #+#             */
/*   Updated: 2021/08/07 04:40:11 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * Write a character c on the file pointing by the descriptor fd
 **/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
