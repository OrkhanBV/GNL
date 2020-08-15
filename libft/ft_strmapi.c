/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 22:37:51 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/29 03:16:03 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*arr;

	if (s == 0 || f == 0)
		return (0);
	arr = ft_strnew(ft_strlen(s));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		arr[i] = f(i, s[i]);
		i++;
	}
	return (arr);
}
