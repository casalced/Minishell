/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/08/09 06:25:01 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that return 0 if c no is inside code ascii. Else 1
 **/
int	ft_isascii(int c)
{
	int	rtn;

	rtn = 0;
	if ((c >= 0 && c < 128))
		rtn = 1;
	return (rtn);
}
