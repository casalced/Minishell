/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/09 06:58:49 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
*  	The  strchr()  function returns a pointer to the FIRST occurrence
*	of the character c in the string s. NULL if no there are occurrence
*	The terminating char '\0' is part of the string.
**/
char	*ft_strchr(char *s, int c)
{
	char	*rtn;

	rtn = 0;
	if (c > 255)
		rtn = s;
	while (*s && rtn == 0 )
	{
		if (*s == (unsigned char)c)
			rtn = s;
		s++;
	}
	if (c == 0)
		rtn = s;
	return (rtn);
}
