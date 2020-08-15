/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 22:58:56 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:38:54 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (lendst >= size)
		return (lensrc + size);
	else
		lensrc = lensrc + lendst;
	i = 0;
	while (src != 0 && src[i] != 0 && lendst + 1 < size)
		dst[lendst++] = src[i++];
	dst[lendst] = '\0';
	return (lensrc);
}
