/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:48:56 by sboetti           #+#    #+#             */
/*   Updated: 2022/12/22 17:13:52 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_bzero(char *sbase, size_t n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		sbase[i] = '\0';
		i++;
		n--;
	}
}

char	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if ((count >= 922337200000000000)
		|| (size >= 922337200000000000))
		return (0);
	str = malloc(sizeof(char) * (count * size));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	ft_bzero(str, count * size);
	return (str);
}

static char	*ft_read(int fd, char *sbase)
{
	char	*buff;
	int		rd;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	rd = 1;
	while (rd != 0 && !ft_strchr(sbase, '\n'))
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd] = '\0';
		sbase = ft_strjoin(sbase, buff);
	}
	free(buff);
	return (sbase);
}

char	*get_next_line(int fd)
{
	static char	*sbase[1024];
	char		*line;

	if (fd == -1 || BUFFER_SIZE <= 0 || read(fd, 0, 0))
	{
		if (sbase[fd])
			free(sbase[fd]);
		sbase[fd] = NULL;
		return (NULL);
	}
	sbase[fd] = ft_read(fd, sbase[fd]);
	if (!sbase[fd])
		return (NULL);
	line = ft_getline(sbase[fd]);
	sbase[fd] = ft_newsbase(sbase[fd]);
	return (line);
}
