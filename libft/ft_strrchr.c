/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 19:55:34 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 00:41:51 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ccp;
	char	*scp;
	size_t	len;

	ccp = (char)c;
	scp = (char*)s;
	len = (ft_strlen(scp));
	while (scp[len] != ccp && len != 0)
		len--;
	if (scp[len] == ccp)
		return (&scp[len]);
	return (0);
}
