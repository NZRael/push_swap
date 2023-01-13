/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:29:26 by sboetti           #+#    #+#             */
/*   Updated: 2022/11/17 14:24:25 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	int				ok;

	str = (unsigned char *)s;
	i = 0;
	ok = -1;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			ok = i;
			break ;
		}
		i++;
	}
	if (ok == -1)
		return (0);
	return (&str[ok]);
}
