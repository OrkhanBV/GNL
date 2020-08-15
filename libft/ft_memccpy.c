/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 02:03:26 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:20:44 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int stopsimbolcode, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	unsigned char	sp;
	size_t			i;

	i = 0;
	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	sp = (unsigned char)stopsimbolcode;
	while (i < n)
	{
		if (ptr_src[i] == sp)
		{
			ptr_dst[i] = ptr_src[i];
			return (dst + i + 1);
		}
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (0);
}
