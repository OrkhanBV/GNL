/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremarqu <jremarqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 22:57:08 by jremarqu          #+#    #+#             */
/*   Updated: 2019/06/16 03:54:45 by jremarqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_dedakostil(char **storage, char **line, int *num, int i)
{
	char		*swap;
	int			len1;

	len1 = ((ft_strlen(storage[num[2]])) - i);
	if (storage[num[2]][i] == '\n')
	{
		if (!(*storage[num[2]]))
			return (0);
		if ((*line = ft_strsub(storage[num[2]], 0, (i))) == 0)
			return (-1);
		if ((swap = ft_strsub(storage[num[2]], (i + 1), len1)) == 0)
			return (-1);
		free(storage[num[2]]);
		if ((storage[num[2]] = ft_strsub(swap, 0, ft_strlen(swap))) == 0)
			return (-1);
		free(swap);
		return (1);
	}
	return (100);
}

static char		ft_checkstorage(char **storage, char **line, int *num)
{
	int				i;

	i = 0;
	if ((storage)[num[2]])
	{
		while (storage[num[2]][i] != '\n' && storage[num[2]][i] != '\0')
			i++;
		if ((ft_dedakostil(storage, line, num, i)) == 1)
			return (1);
		if ((ft_dedakostil(storage, line, num, i)) == 0)
			return (0);
		if ((ft_dedakostil(storage, line, num, i)) == -1)
			return (-1);
	}
	return (100);
}

static int		ft_lastjedi(char **storage, char **line, int *num, int ret)
{
	char			*dump2;
	int				lenstor;

	lenstor = (ft_strlen(storage[num[2]]));
	if (ret == 0)
	{
		if (storage[num[2]][0] != '\0')
		{
			if ((*line = ft_strdup(storage[num[2]])) == 0)
				return (-1);
			if ((dump2 = ft_strsub(storage[num[2]], lenstor, lenstor)) == 0)
				return (-1);
			free(storage[num[2]]);
			storage[num[2]] = dump2;
			ft_bzero(storage[num[2]], ft_strlen(storage[num[2]]));
			return (1);
		}
		ft_bzero(storage[num[2]], ft_strlen(storage[num[2]]));
		return (0);
	}
	return (100);
}

static int		ft_proreading(char **storage, char **line, int *num)
{
	char			*dump;
	char			buff[BUFF_SIZE + 1];
	int				ret;

	while ((ret = read(num[2], buff, BUFF_SIZE)) > 0 || storage[num[2]])
	{
		buff[ret] = '\0';
		dump = storage[num[2]];
		storage[num[2]] = ft_strjoin(dump, buff);
		if (dump)
			free(dump);
		if (ft_lastjedi(storage, line, num, ret) == 1)
			return (1);
		if (ft_lastjedi(storage, line, num, ret) == 0)
			return (0);
		if ((ft_checkstorage(storage, line, num)) == 1)
			return (1);
		num[0] += BUFF_SIZE;
	}
	ft_bzero(storage[num[2]], ft_strlen(storage[num[2]]));
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*storage[NUM_OF_FILES];
	int				num[3];

	num[0] = 0;
	num[1] = 0;
	num[2] = fd;
	if (!line || fd < 0 || read(fd, buff, 0) < 0)
		return (-1);
	if ((ft_checkstorage(storage, line, num)) == 1)
		return (1);
	*line = NULL;
	if (!storage[num[2]])
		storage[num[2]] = ft_strnew(0);
	if (ft_proreading(storage, line, num) == 1)
		return (1);
	else
		return (0);
	return (0);
}
