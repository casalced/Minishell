/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/08/09 06:25:57 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Function that return 2048 if c is a digit else 0
 **/
int	ft_isdigit(int c)
{
	int	rtn;

	rtn = 0;
	if ((c > 47 && c < 58))
		rtn = 2048;
	return (rtn);
}
