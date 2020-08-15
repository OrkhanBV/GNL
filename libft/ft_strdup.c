/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 19:38:58 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 22:27:11 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*cpsrc;
	size_t		a;

	a = 0;
	cpsrc = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!cpsrc)
		return (0);
	while (a < ft_strlen(src))
	{
		cpsrc[a] = src[a];
		a++;
	}
	cpsrc[a] = '\0';
	return ((char*)cpsrc);
}
