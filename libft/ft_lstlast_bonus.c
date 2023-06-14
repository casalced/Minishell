/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 05:55:05 by casalced          #+#    #+#             */
/*   Updated: 2021/09/12 02:24:06 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Function that returns the last element of a list type t_list
 **/
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = (void *)0;
	if (lst)
	{
		last = lst;
		while (last->next)
		{
			last = last->next;
		}
	}
	return (last);
}
