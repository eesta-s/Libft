/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:44:40 by eesta             #+#    #+#             */
/*   Updated: 2021/04/28 20:33:07 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_slova(char *str, char razd)
{
	char	*b;
	int		count;

	count = 0;
	b = str;
	while (*b)
	{
		while (*b && *b == razd)
			b++;
		if (*b && *b != razd)
		{
			count++;
			while (*b && *b != razd)
				b++;
		}
	}
	return (count);
}

static char	*ft_strncpy(char *dst, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

static char	**ft_malloc_error(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
	return (NULL);
}

static char	**ft_put_s(char *str, char **a, char c)
{
	int		i;
	int		j;
	char	*b;

	i = 0;
	while (*str)
	{
		j = 0;
		while (*str && *str == c)
			str++;
		while (*(str + j) && *(str + j) != c)
			j++;
		if (*str && *str != c)
		{
			b = (char *)malloc(sizeof(char) * (j + 1));
			if (!b)
				return (ft_malloc_error(a));
			ft_strncpy(b, str, j);
			a[i++] = b;
			while (*str && *str != c)
				str++;
		}
	}
	a[i] = (void *)0;
	return (a);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		n;

	if (!s)
		return ((void *)0);
	n = ft_count_slova((char *)s, c);
	a = (char **)malloc(sizeof(char *) * (n + 1));
	if (!a)
		return (NULL);
	a = ft_put_s((char *)s, a, c);
	return (a);
}
