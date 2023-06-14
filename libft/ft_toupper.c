/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/08/11 01:04:40 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**Funtion that convert any alphabetic code to upper case**/
int	ft_toupper(int c)
{
	int	rtn;

	rtn = c;
	if (c > 96 && c < 123)
		rtn = c - 32;
	return (rtn);
}
