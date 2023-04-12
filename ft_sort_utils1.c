/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:00:45 by sboetti           #+#    #+#             */
/*   Updated: 2023/04/12 10:59:53 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(t_pile *a, int key)
{
	int	i;

	i = 0;
	while (i < a->size)
	{
		if (a->elem[i] <= key)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_keynumber(int *sorted_tab, int size, int divided, int chunk)
{
	int	key;

	key = sorted_tab[(size * divided) / chunk];
	return (key);
}

void	ft_mv_top(t_pile *a, int index)
{
	int	elem;

	elem = a->elem[index];
	while (elem != a->elem[a->top])
	{
		if (!ft_r_or_rr(a, a->elem[index]))
			ft_ra(a);
		else
			ft_rra(a);
	}
}

void	ft_push_index(t_pile *a, t_pile *b, int key)
{
	int	index;

	index = ft_find_index(a, key);
	while (index != -1)
	{
		ft_mv_top(a, index);
		ft_pb(a, b);
		index = ft_find_index(a, key);
	}
}

void	ft_sort_hundred(t_pile *a, t_pile *b)
{
	int	i;
	int	key;
	int	*sorted_tab;

	i = 1;
	sorted_tab = ft_ps_sort_int_tab(a);
	if (!sorted_tab)
		return (free(sorted_tab));
	while (i != 20)
	{
		key = ft_keynumber(sorted_tab, a->size, i, 3);
		ft_push_index(a, b, key);
		i++;
	}
	free(sorted_tab);
	ft_sort_rest(a, b);
	while (b->size != 0)
	{
		ft_get_max(b);
		ft_pa(a, b);
	}
}
