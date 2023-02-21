/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:42:20 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/21 12:13:29 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_smallest_ten(t_pile *a)
{
	int	elem;

	elem = ft_get_min(a);
	while (a->elem[a->top] != elem)
	{
		if (!ft_r_or_rr(a, elem))
			ft_ra(a);
		else
			ft_rra(a);
	}
}

void	ft_sort_ten(t_pile *a, t_pile *b)
{
	if (!ft_issort(a))
	{
		while (a->size != 5)
		{
			ft_find_smallest_ten(a);
			ft_pb(a, b);
		}
		ft_sort_five(a, b);
		while (b->size > 0)
			ft_pa(a, b);
	}
}

int	ft_find_biggest_index(t_pile *b)
{
	int	i;
	int	index;

	i = 0;
	index = i;
	while (i < b->size)
	{
		if (b->elem[index] < b->elem[i])
			index = i;
		i++;
	}
	return (index);
}

void	ft_get_max(t_pile *b)
{
	int	index;
	int	max;

	index = ft_find_biggest_index(b);
	max = b->elem[index];
	while (b->elem[b->top] != max)
	{
		if (!ft_r_or_rr(b, max))
			ft_rb(b);
		else
			ft_rrb(b);
	}
}
