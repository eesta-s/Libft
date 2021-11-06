/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 20:15:14 by eesta             #+#    #+#             */
/*   Updated: 2021/04/24 20:39:55 by eesta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	s;
	int	sign;

	nbr = 0;
	s = 0;
	sign = 1;
	while ((str[s] == ' ') || (str[s] >= 9 && str[s] <= 13))
		s++;
	if (str[s] == '-' || str[s] == '+')
	{
		if (str[s] == '-')
			sign = -sign;
		s++;
	}
	while (str[s] >= '0' && str[s] <= '9')
	{
		nbr = nbr * 10 + (str[s] - '0');
		s++;
	}
	return (sign * nbr);
}
