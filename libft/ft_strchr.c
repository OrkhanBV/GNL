/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:54:44 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:41:02 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ccp;
	char	*scp;
	size_t	i;

	i = 0;
	ccp = (char)c;
	scp = (char*)s;
	while (s[i] != '\0' && s[i] != ccp)
	{
		i++;
	}
	if (scp[i] == ccp)
		return (&scp[i]);
	return (0);
}
