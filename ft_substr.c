/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:23:17 by eesta             #+#    #+#             */
/*   Updated: 2021/04/25 16:38:51 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(len + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < len && i + start < ft_strlen(s))
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
