/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 07:17:03 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 16:23:22 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	f_point_initial(size_t *point_i, char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	*point_i = 0;
	while (*s1)
	{
		if (ft_isprint(*s1) && !ft_strrchr(set, *s1))
		{
			*point_i = i;
			break ;
		}
		s1++;
		i++;
	}
}

static void	f_point_final(size_t *point_f, char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	*point_f = 0;
	s1 = s1 + (i - 1);
	while (*s1)
	{
		if (ft_isprint(*s1) && !ft_strrchr(set, *s1))
		{
			*point_f = i - 1;
			break ;
		}
		s1--;
		i--;
	}
}

static char	*clean_str(char const*s1, char const*set \
		, size_t point_i, size_t point_f )
{
	size_t	i;
	void	*reset;
	char	*rtn;

	i = 0;
	rtn = ft_calloc(ft_strlen(s1) + 2, sizeof(*s1));
	reset = rtn;
	while (*s1 && reset)
	{
		if ((i <= point_f && i >= point_i)
			|| (!ft_strrchr(set, *s1) && !(i <= point_f && i >= point_i))
		)
		{	
			*rtn++ = *s1;
		}
		s1++;
		i++;
	}
	rtn = reset;
	reset = ft_strdup(rtn);
	if (rtn)
		free(rtn);
	return (reset);
}

/**
 * Function that returns a new string without the characters contained in set
 **/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rtn;
	size_t	point_i;
	size_t	point_f;

	rtn = 0;
	if (s1 && set)
	{
		f_point_initial(&point_i, s1, set);
		f_point_final(&point_f, s1, set);
		if (point_i || point_f)
			rtn = clean_str(s1, set, point_i, point_f);
		else
			rtn = ft_calloc(1, sizeof(char));
	}
	return (rtn);
}
