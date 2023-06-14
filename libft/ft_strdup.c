/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 00:31:25 by casalced          #+#    #+#             */
/*   Updated: 2021/09/06 09:00:10 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**Return a new string clone of str**/
char	*ft_strdup(const char *str)
{
	char	*cpy;

	cpy = ft_calloc(ft_strlen(str) + 1, sizeof(char));
	if (cpy)
		ft_strlcpy(cpy, str, ft_strlen(str) + 1);
	return (cpy);
}
