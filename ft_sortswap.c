/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:00:17 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/21 13:59:56 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_rest(t_pile *a, t_pile *b)
{
	if (a->size == 2)
	{
		if (!ft_issort(a))
			ft_sa(a);
	}
	else if (a->size == 3)
		ft_sort_three(a);
	else if (a->size == 4)
		ft_sort_four(a, b);
	else if (a->size == 5)
		ft_sort_five(a, b);
	else if (a->size > 5)
		ft_sort_more_rest(a, b, a->size);
}

void	ft_sort_more_rest(t_pile *a, t_pile *b, int size)
{
	if (!ft_issort(a))
	{
		while (a->size > 5)
		{
			ft_find_smallest_ten(a);
			ft_pb(a, b);
		}
		ft_sort_five(a, b);
		while (a->size != size)
			ft_pa(a, b);
	}
}

void	ft_sort_rest_hundred(t_pile *a, t_pile *b)
{
	if (a->size == 2)
	{
		if (!ft_issort(a))
			ft_sa(a);
	}
	else if (a->size == 3)
		ft_sort_three(a);
	else if (a->size == 4)
		ft_sort_four(a, b);
	else if (a->size == 5)
		ft_sort_five(a, b);
	else if (a->size > 5 && a->size <= 10)
		ft_sort_more_rest(a, b, a->size);
	else if (a->size > 10)
		ft_sort_hundred(a, b);
}

void	ft_sort(t_pile *a, t_pile *b)
{
	if (a->size < 2 || ft_issort(a))
		return ;
	if (a->size == 2)
		ft_sa(a);
	else if (a->size == 3)
		ft_sort_three(a);
	else if (a->size == 4)
		ft_sort_four(a, b);
	else if (a->size == 5)
		ft_sort_five(a, b);
	else if (a->size > 5 && a->size <= 10)
		ft_sort_ten(a, b);
	else if (a->size > 10 && a->size <= 100)
		ft_sort_hundred(a, b);
	else if (a->size > 100)
		ft_sort_fivehundred(a, b);
	return ;
}
