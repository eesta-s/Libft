/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:37:50 by eesta             #+#    #+#             */
/*   Updated: 2021/04/20 13:33:35 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	b;
	size_t			i;

	b = c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == b)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
