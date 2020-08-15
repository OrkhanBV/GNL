/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:35:42 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 02:17:30 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		nb;

	nb = 0;
	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(int) * ((max - min)));
	while (min < max)
	{
		arr[nb] = min;
		nb++;
		min++;
	}
	return (arr);
}
