/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 05:14:54 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 01:32:15 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lennnbr(int nbr)
{
	size_t	lennbr;

	lennbr = 0;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		lennbr++;
	}
	return (lennbr);
}

static char		*ft_costyl(int n)
{
	char	*mnbr;

	mnbr = 0;
	if (n == -2147483648)
	{
		mnbr = ft_strnew(ft_strlen("-2147483648"));
		mnbr = (ft_strcpy(mnbr, "-2147483648"));
	}
	return (mnbr);
}

char			*ft_itoa(int n)
{
	int				len;
	int				i;
	char			*mnbr;

	i = 0;
	if (n == -2147483648)
		return (ft_costyl(n));
	len = ft_lennnbr(n);
	if (n <= 0)
		len = len + 1;
	if (!(mnbr = ft_strnew(len)))
		return (0);
	if (n < 0)
	{
		mnbr[0] = '-';
		n = -n;
		i++;
	}
	mnbr[len] = '\0';
	while (i < len)
	{
		mnbr[--len] = n % 10 + '0';
		n = n / 10;
	}
	return (mnbr);
}
