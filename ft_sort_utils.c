/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:15:15 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/07 19:25:11 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_pile *a)
{
	int	first;
	int	second;
	int	third;

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

void	ft_sort_five(t_pile *a, t_pile *b)
{
	
}

void	ft_get_next_min()
{
	return ;
}