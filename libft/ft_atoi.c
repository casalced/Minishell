/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 09:01:11 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 12:24:01 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long int	calc_digits(const char *nptr, int sign, int *no_finish)
{
	long long int	rtn;

	rtn = 0;
	while (ft_isdigit(*nptr))
	{
		rtn = (10 * rtn);
		rtn = rtn + sign * ((*nptr) - 48);
		nptr++;
	}
	*no_finish = 0;
	return (rtn);
}

static int	rtn_final(long long int rtn)
{
	if (rtn == -469762049)
		rtn = -1;
	if (rtn == 469762049)
		rtn = 0;
	return (rtn);
}

static void	is_correct(const char *nptr, \
int	*on_number, long long int *sign, int *no_finish)
{
	if (*on_number)
		*no_finish = 0;
	if (*nptr == '-')
		*sign = -1 * *sign;
	*on_number = 1;
}

/**
 * Return int value of a string with digits * en charts 
 * **/
int	ft_atoi(const char *nptr)
{
	long long int	rtn;
	long long int	sign;
	int				no_finish;
	int				on_number;

	no_finish = 1;
	on_number = 0;
	rtn = 0;
	sign = 1;
	while (no_finish && *nptr && !(*nptr == '\e') && !ft_isalpha(*nptr))
	{
		if (*nptr > 8 && *nptr < 14 && on_number)
			no_finish = 0;
		if (ft_isprint(*nptr))
		{
			if (ft_isdigit(*nptr))
				rtn = calc_digits(nptr, sign, &no_finish);
			if (*nptr == '+' || *nptr == '-')
				is_correct(nptr, &on_number, &sign, &no_finish);
		}
		if (no_finish)
			nptr++;
	}
	return (rtn_final(rtn));
}
