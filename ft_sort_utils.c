/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:15:15 by sboetti           #+#    #+#             */
/*   Updated: 2023/04/12 10:59:47 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_pile *a)
{
	int	first;
	int	second;
	int	third;

	if (a->size == 2)
		return ;
	first = a->elem[a->top];
	second = a->elem[a->top - 1];
	third = a->elem[a->top - 2];
	if (first > second && second < third && first < third)
		ft_sa(a);
	else if (first > second && second > third && first > third)
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (first > second && second < third && first > third)
		ft_ra(a);
	else if (first < second && second > third && first < third)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (first < second && second > third && first > third)
		ft_rra(a);
}

void	ft_sort_four(t_pile *a, t_pile *b)
{
	if (ft_r_or_rr(a, ft_get_min(a)))
	{
		while (a->elem[a->top] != ft_get_min(a))
			ft_rra(a);
	}
	else
	{
		while (a->elem[a->top] != ft_get_min(a))
			ft_ra(a);
	}
	ft_pb(a, b);
	ft_sort_three(a);
	ft_pa(a, b);
}

void	ft_sort_five(t_pile *a, t_pile *b)
{
	int	i;
	int	min;

	i = 0;
	while (i++ < 2)
	{
		min = ft_get_min(a);
		if (ft_r_or_rr(a, min))
		{
			while (a->elem[a->top] != min)
				ft_rra(a);
		}
		else
		{
			while (a->elem[a->top] != min)
				ft_ra(a);
		}
		ft_pb(a, b);
	}
	ft_sort_three(a);
	ft_pa(a, b);
	ft_pa(a, b);
	return ;
}

int	ft_get_min(t_pile *p)
{
	int	i;
	int	min;

	i = p->top;
	min = p->elem[i];
	while (i >= 0)
	{
		if (min > p->elem[i])
			min = p->elem[i];
		i--;
	}
	return (min);
}

void	ft_sort_fivehundred(t_pile *a, t_pile *b)
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
		key = ft_keynumber(sorted_tab, a->size, i, 5);
		ft_push_index(a, b, key);
		i++;
	}
	free(sorted_tab);
	ft_sort_rest_hundred(a, b);
	while (b->size != 0)
	{
		ft_get_max(b);
		ft_pa(a, b);
	}
}
