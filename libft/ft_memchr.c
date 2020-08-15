/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:04:17 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:24:33 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*ptr_arr;
	size_t			i;

	i = 0;
	ptr_arr = (unsigned char*)arr;
	while (i < n)
	{
		if (ptr_arr[i] == (unsigned char)c)
			return (ptr_arr + i);
		i++;
	}
	return (0);
}
