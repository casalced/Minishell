/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 05:49:39 by casalced          #+#    #+#             */
/*   Updated: 2021/09/10 10:02:21 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>*/
#include "libft.h"

/** Function that return a new string = s1 + s2 or NULL on error**/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;

	rtn = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (rtn != NULL && s1 && s2)
	{
		ft_strlcpy(rtn, s1, ft_strlen(s1) + 1);
		ft_strlcat(rtn, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	}
	return (rtn);
}
