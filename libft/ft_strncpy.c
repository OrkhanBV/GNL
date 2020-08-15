/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:33:10 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:33:28 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char			*ptr_dst;
	char			*ptr_src;
	size_t			i;

	i = 0;
	ptr_dst = (char*)dst;
	ptr_src = (char*)src;
	while (ptr_src[i] != '\0' && i < len)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	while (i < len)
	{
		ptr_dst[i] = '\0';
		i++;
	}
	return (ptr_dst);
}
