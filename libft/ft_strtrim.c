/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <jremarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 00:13:20 by jremarqu          #+#    #+#             */
/*   Updated: 2019/06/09 19:20:41 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	j;
	size_t	lens;
	size_t	reallen;
	size_t	i;
	char	*new;

	if (s == 0)
		return (0);
	j = 0;
	lens = ft_strlen(s);
	i = lens - 1;
	while (lens > 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
	{
		--i;
		--lens;
	}
	if (lens == 0)
		return (ft_strnew(lens));
	while (j < lens && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
		j++;
	reallen = (lens - j);
	new = ft_strsub(s, j, reallen);
	return (new);
}
