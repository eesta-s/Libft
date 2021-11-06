/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:40:53 by eesta             #+#    #+#             */
/*   Updated: 2021/04/25 17:39:49 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	a = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (a)
			{
				new = a->next;
				(*del)(a->content);
				free(a);
				a = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&a, new);
		lst = lst->next;
	}
	return (a);
}
