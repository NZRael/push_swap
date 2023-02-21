/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:30:26 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/17 12:13:36 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_tabstrlen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	ft_tabintlen(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

long long	ft_psatoi(char *str)
{
	int			i;
	int			x;
	long long	nb;

	i = 0;
	x = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			x = -1;
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (2147483649);
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * x);
}

int	ft_issort(t_pile *a)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < a->top)
	{
		if (a->elem[i] > a->elem[i + 1])
			i++;
		else
			return (res);
	}
	res = 1;
	return (res);
}

int	ft_r_or_rr(t_pile *p, int x)
{
	int	i;

	i = p->top;
	while (i >= 0)
	{
		if (x == p->elem[i])
			break ;
		i--;
	}
	if (i >= (p->top / 2))
		return (0);
	else
		return (1);
}
