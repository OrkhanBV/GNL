/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <jremarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:01:56 by jremarqu          #+#    #+#             */
/*   Updated: 2019/05/29 00:04:21 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*ptr;
	size_t				i;

	i = 0;
	ptr = (unsigned char*)b;
	while (len > 0)
	{
		ptr[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (b);
}
