/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:29:52 by eesta             #+#    #+#             */
/*   Updated: 2021/04/25 16:54:13 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*n;
	int		size;

	n = lst;
	size = 0;
	if (lst == NULL)
		return (0);
	while (n->next != NULL)
	{
		n = n->next;
		size++;
	}
	return (size + 1);
}
