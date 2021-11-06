/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 17:19:52 by eesta             #+#    #+#             */
/*   Updated: 2021/04/24 15:41:40 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*b;
	const unsigned char	*c;
	size_t				i;

	b = dest;
	c = src;
	i = 0;
	if (n && b != c)
	{
		while (i < n)
		{
			b[i] = c[i];
			i++;
		}
	}
	return (b);
}
