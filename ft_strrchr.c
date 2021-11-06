/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:38:01 by eesta             #+#    #+#             */
/*   Updated: 2021/04/22 16:40:50 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			p = (char *)&s[i];
		i++;
	}
	if ((char) c == s[i])
		return ((char *)&s[i]);
	return (p);
}
