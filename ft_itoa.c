/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:15:48 by eesta             #+#    #+#             */
/*   Updated: 2021/04/24 21:25:47 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int c)
{
	int		len;
	long	nb;

	len = 1;
	nb = c;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*src;
	long	nbr;
	int		i;

	i = 0;
	src = malloc(sizeof(char) * ft_length(n) + 1);
	if (!src)
		return (NULL);
	if (n < 0)
		src[0] = '-';
	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	src[ft_length(n) - i++] = '\0';
	while (nbr >= 10)
	{
		src[ft_length(n) - i++] = (nbr % 10) + 48;
		nbr = nbr / 10;
	}
	src[ft_length(n) - i++] = (nbr % 10) + 48;
	return (src);
}
