/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:08:15 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/01 13:12:34 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	arg;

	va_start(arg, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_arguments(s[i + 1], arg, &count);
			i++;
		}
		else
			ft_printf_putchar_fd(s[i], 1, &count);
		i++;
	}
	va_end(arg);
	return (count);
}
