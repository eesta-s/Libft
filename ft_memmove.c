/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:41:20 by eesta             #+#    #+#             */
/*   Updated: 2021/04/28 20:46:51 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n > 0)
		{
			((UC *)dest)[n - 1] = ((UC *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((UC *)dest)[i] = ((UC *)src)[i];
			i++;
		}
	}
	return (dest);
}
