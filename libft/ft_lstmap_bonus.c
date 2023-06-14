/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casalced <casalced@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 03:43:55 by casalced          #+#    #+#             */
/*   Updated: 2021/09/15 12:36:34 by casalced         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Function  
**/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	char	*new_content;
	t_list	*new_lst;
	t_list	*prev_element;

	new_lst = lst;
	prev_element = 0;
	while (lst && f)
	{
		new_content = (*f)(lst->content);
		new_element = ft_lstnew(new_content);
		if (prev_element)
			prev_element->next = new_element;
		if (new_lst == lst)
			new_lst = new_element;
		if (del)
		{
			(*del)(prev_element);
		}
		prev_element = new_element;
		lst = lst->next;
	}
	return (new_lst);
}
