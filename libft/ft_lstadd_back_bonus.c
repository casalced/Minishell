/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 06:07:48 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 12:29:28 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *	Funtion that put a t_list element in last position of a list
 **/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst && lst && new)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
