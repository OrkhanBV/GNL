/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrofwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 02:06:45 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 02:12:45 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_nbrofwords(char const *arr, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (arr[i] != c)
		j = 1;
	while (arr[i] != '\0')
	{
		if (arr[i] == c && arr[i + 1] != c && arr[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}
