/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 23:50:50 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:46:06 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string1, const char *string2)
{
	size_t i;
	size_t n;

	n = ft_strlen(string2);
	i = 0;
	if (!string2[i])
		return ((char*)string1);
	if (string2[0] == '\0' || string1 == string2)
		return ((char*)string1);
	while (string1[i] != '\0')
	{
		if (!(ft_memcmp(string1 + i, string2, n)))
			return ((char*)string1 + i);
		i++;
	}
	return (NULL);
}
