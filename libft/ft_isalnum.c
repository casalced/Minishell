/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 16:18:27 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <stdio.h>*/

#include "libft.h"

/**
 * Function that return 0 (false) if the character no is alfanumeric. Else return
 * 8
 **/
int	ft_isalnum(int c)
{
	int	rtn;

	rtn = 0;
	if (ft_isdigit(c) || ft_isalpha(c))
		rtn = 8;
	return (rtn);
}
