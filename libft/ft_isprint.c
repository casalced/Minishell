/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/08/09 23:40:12 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that return 16384 if c is 
 * between 30 and 126(printables ascii codes). Else 0
 **/
int	ft_isprint(int c)
{
	int	rtn;

	rtn = 0;
	if ((c > 31 && c < 127))
		rtn = 16384;
	return (rtn);
}
