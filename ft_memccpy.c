/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:31:54 by eesta             #+#    #+#             */
/*   Updated: 2021/04/20 15:20:34 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*b;
	const unsigned char	*g;
	unsigned char		s;
	size_t				i;

	b = dest;
	g = src;
	i = 0;
	s = c;
	while (i < n)
	{
		b[i] = g[i];
		if (b[i] == s)
			return (++b + i);
		i++;
	}
	return (NULL);
}
