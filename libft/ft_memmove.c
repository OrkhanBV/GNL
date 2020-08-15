/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <jremarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:04:42 by jremarqu          #+#    #+#             */
/*   Updated: 2019/06/04 23:13:23 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_src;
	unsigned char	*ptr_dst;

	if (dst == src)
		return (dst);
	ptr_src = (unsigned char*)src;
	ptr_dst = (unsigned char*)dst;
	i = 0;
	if (ptr_src < ptr_dst)
	{
		while (i < len)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return ((unsigned char*)dst);
}
