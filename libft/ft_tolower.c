/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/07 00:09:52 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that convert any alphabetic caracter to lower case.
 **/
int	ft_tolower(int c)
{
	int	rtn;

	rtn = 0;
	if (c > 64 && c < 91)
		rtn = c + 32;
	else
		rtn = c;
	return (rtn);
}
