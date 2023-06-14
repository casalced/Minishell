/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:25:12 by casalced          #+#    #+#             */
/*   Updated: 2021/09/09 18:54:12 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**	The strrchr() function returns a pointer to the LAST occurrence
*	of the character c in the string s. NULL if no find occurrences.
*	The terminating char '\0' is part of the string.
**/
char	*ft_strrchr(const char *s, int c)
{
	const char	*rtn;

	rtn = 0;
	if (c > 255)
		rtn = s;
	while (*s && c < 256)
	{
		if (*s == (unsigned char)c)
			rtn = s;
		s++;
	}
	if (c == 0)
		rtn = s;
	return ((char *)rtn);
}
