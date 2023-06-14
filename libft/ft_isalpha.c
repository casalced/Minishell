/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/08/09 06:23:38 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that return 0 if c no is alphabetic caracter. Else 1024
 **/
int	ft_isalpha(int c)
{
	int	rtn;

	rtn = 0;
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123))
		rtn = 1024;
	return (rtn);
}
