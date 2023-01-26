/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:30:26 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/26 12:37:31 by sboetti          ###   ########.fr       */
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

	i = 1;
	while (i < a->size)
	{
		if (a->elem[i - 1] < a->elem[i])
			i++;
		else
			return (0);
	}
	return (1);
}

void	ft_freetab(t_pile *p)
{
	int	i;

	i = 0;
	while (i < p->size)
	{
		p->elem[i] = 0;
		i++;
	}
}
