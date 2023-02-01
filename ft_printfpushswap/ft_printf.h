/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 09:35:27 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/01 13:10:31 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *s, ...);
void		ft_arguments(char str, va_list arg, int *count);
void		ft_printf_putchar_fd(char c, int fd, int *count);
void		ft_printf_putstr_fd(char *str, int fd, int *count);
void		ft_printf_putnbr_fd(int n, int fd, int *count);
size_t		ft_printf_strlen(char *s);

#endif
