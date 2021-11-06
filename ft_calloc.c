/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:54:35 by eesta             #+#    #+#             */
/*   Updated: 2021/04/23 15:35:29 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;
	size_t	i;

	s = malloc(count * size);
	i = 0;
	if (s == NULL)
		return (NULL);
	while (i < (count * size))
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
