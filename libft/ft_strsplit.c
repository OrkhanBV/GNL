/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 01:13:12 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/29 04:48:11 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int			ft_wordnbr(char const *or, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (or[i] != c && or[i] != '\0')
		j = 1;
	while (or[i] != '\0')
	{
		if (or[i] == c && or[i + 1] != c && or[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}

static int			ft_wordlen(char const *str, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static int			ft_is_costil(char const *s, char c, size_t j)
{
	while (s[j] == c && s[j] != '\0')
		j++;
	return (j);
}

static int			ft_clean(char **str2, int i)
{
	while (i != 0)
		free(str2[i--]);
	free(str2);
	return (0);
}

char				**ft_strsplit(char const *s, char c)
{
	int			i;
	size_t		j;
	size_t		k;
	char		**str2;

	if (!s || (str2 = (char**)malloc(sizeof(*str2) *
					(ft_wordnbr(s, c)) + 1)) == 0)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_wordnbr(s, c))
	{
		if ((str2[i] = ft_strnew(ft_wordlen(&s[j], c))) == 0)
		{
			ft_clean(str2, i - 1);
			return (0);
		}
		k = 0;
		j = ft_is_costil(s, c, j);
		while (s[j] != c && s[j] != '\0')
			str2[i][k++] = s[j++];
	}
	str2[i] = 0;
	return (str2);
}
