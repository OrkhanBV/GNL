/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 23:26:21 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/29 00:05:26 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_longlong(size_t sum, int res, char c)
{
	if ((sum > 922337203685477580 || (sum == 922337203685477580 && c > '8'))
			&& res == -1)
		return (0);
	if ((sum > 922337203685477580 || (sum == 922337203685477580 && c > '7'))
			&& res == 1)
		return (-1);
	return (1);
}

int				ft_atoi(const char *str)
{
	size_t i;
	size_t res;
	size_t sum;

	i = 0;
	res = 1;
	sum = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\f' || str[i] == '\r')
		i = i + 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			res = -res;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (ft_longlong(sum, res, str[i]) != 1)
			return (ft_longlong(sum, res, str[i]));
		sum = (sum * 10 + (str[i++] - '0'));
	}
	return ((int)(res * sum));
}
