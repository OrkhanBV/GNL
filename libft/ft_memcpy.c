/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:39:09 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:17:51 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cpypnt;
	unsigned char	*cpypnt1;
	int				i;

	if (dst == src)
		return (dst);
	i = 0;
	cpypnt = (unsigned char*)dst;
	cpypnt1 = (unsigned char*)src;
	while (n != 0)
	{
		cpypnt[i] = cpypnt1[i];
		i++;
		n--;
	}
	return (dst);
}
