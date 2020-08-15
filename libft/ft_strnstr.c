/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 22:16:27 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:48:02 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string1, const char *string2, size_t len)
{
	size_t i;
	size_t n;

	n = ft_strlen(string2);
	i = 0;
	if (!string2 && len == 0)
		return ((char*)string1);
	if (string2[0] == '\0' || string1 == string2)
		return ((char*)string1);
	while (string1[i] != '\0' && i <= len)
	{
		if (((n + i) <= len) && (!(ft_memcmp(string1 + i, string2, n))))
			return ((char*)string1 + i);
		i++;
	}
	return (NULL);
}
