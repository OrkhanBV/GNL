/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 22:20:58 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 01:15:12 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*arr;

	if (!s || !f)
		return (NULL);
	arr = ft_strnew(ft_strlen(s));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		arr[i] = f(s[i]);
		i++;
	}
	return (arr);
}
