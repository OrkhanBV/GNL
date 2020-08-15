/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 00:44:57 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:37:42 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*scp2;

	i = 0;
	j = 0;
	scp2 = (unsigned char*)s2;
	while (s1[i] != '\0')
		i++;
	while (scp2[j] != '\0' && j < n)
	{
		s1[i] = scp2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
