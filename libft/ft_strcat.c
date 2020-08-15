/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 23:39:55 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:36:26 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t			i;
	size_t			j;
	unsigned char	*scp2;

	i = 0;
	j = 0;
	scp2 = (unsigned char*)s2;
	while (s1[i] != '\0')
		i++;
	while (scp2[j] != '\0')
	{
		s1[i] = scp2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
