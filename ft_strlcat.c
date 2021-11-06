/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:14:00 by eesta             #+#    #+#             */
/*   Updated: 2021/04/22 16:34:50 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s1;
	size_t	s2;
	size_t	s3;

	s1 = 0;
	s2 = 0;
	s3 = 0;
	while (src[s1] != 0)
		s1++;
	while (dst[s2] && s2 < size)
		s2++;
	if (size == s2)
		return (s2 + s1);
	while (size && (--size - s2) && src[s3] != 0)
	{
		dst[s2 + s3] = src[s3];
		s3++;
	}
	dst[s2 + s3] = 0;
	return (s1 + s2);
}
