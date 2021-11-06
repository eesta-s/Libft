/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:34:48 by eesta             #+#    #+#             */
/*   Updated: 2021/04/20 11:32:34 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*cr;
	size_t			i;

	cr = dest;
	i = 0;
	while (i < n)
	{
		cr[i] = c;
		i++;
	}
	return (dest);
}
