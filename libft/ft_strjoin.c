/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <jremarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 22:54:09 by jremarqu          #+#    #+#             */
/*   Updated: 2019/06/07 19:37:37 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	join = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == 0)
		return (0);
	while (s1[j] != '\0')
	{
		join[j] = s1[j];
		j++;
	}
	while (s2[i] != '\0')
	{
		join[i + j] = s2[i];
		i++;
	}
	join[i + j] = '\0';
	return (join);
}
