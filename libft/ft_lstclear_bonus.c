/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 07:16:50 by casalced          #+#    #+#             */
/*   Updated: 2021/09/12 00:33:56 by casalced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/**
 * Function that clear and delete a list via external function del
 **/
void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*next;

	aux = *lst;
	while (aux->next)
	{
		next = aux->next;
		(*del)(aux);
		aux = next;
	}
	(*del)(aux);
	*lst = 0;
}
