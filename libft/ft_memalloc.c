/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 02:31:38 by jremarqu          #+#    #+#             */
/*   Updated: 2019/04/28 18:36:52 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*arr;

	if (size == 0)
		return (0);
	arr = malloc(size);
	if (arr == 0)
		return (0);
	return (ft_memset(arr, 0, size));
}
