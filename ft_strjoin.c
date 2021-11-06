/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:50:22 by eesta             #+#    #+#             */
/*   Updated: 2021/04/25 15:49:10 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*c;

	a = 0;
	b = 0;
	c = malloc(ft_strlen(s1) + ft_strlen(s2));
	if (c == NULL)
		return (NULL);
	while (a < ft_strlen(s1))
	{
		c[a] = s1[a];
		a++;
	}
	while (b < ft_strlen(s2))
	{
		c[a] = s2[b];
		b++;
		a++;
	}
	c[a] = 0;
	return (c);
}
