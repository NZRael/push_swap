/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:01:07 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/14 11:08:38 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_pile *a)
{
	int	tmp;

	if (a->size < 1)
		return ;
	tmp = a->elem[a->top];
	a->elem[a->top] = a->elem[a->top - 1];
	a->elem[a->top - 1] = tmp;
	ft_putstr_fd("sa\n", 1);
	return ;
}

void	ft_sb(t_pile *b)
{
	int	tmp;

	if (b->size < 1)
		return ;
	tmp = b->elem[b->top];
	b->elem[b->top] = b->elem[b->top - 1];
	b->elem[b->top - 1] = tmp;
	ft_putstr_fd("sb\n", 1);
	return ;
}

void	ft_ss(t_pile *a, t_pile *b)
{
	int	tmp;

	if (a->size < 1 || b->size < 1)
		return ;
	tmp = a->elem[a->top];
	a->elem[a->top] = a->elem[a->top - 1];
	a->elem[a->top - 1] = tmp;
	tmp = b->elem[b->top];
	b->elem[b->top] = b->elem[b->top - 1];
	b->elem[b->top - 1] = tmp;
	ft_putstr_fd("ss\n", 1);
	return ;
}

void	ft_pa(t_pile *a, t_pile *b)
{
	if (b->size < 1)
		return ;
	a->elem[a->top + 1] = b->elem[b->top];
	a->top += 1;
	b->top -= 1;
	a->size += 1;
	b->size -= 1;
	ft_putstr_fd("pa\n", 1);
	return ;
}

void	ft_pb(t_pile *a, t_pile *b)
{
	if (a->size < 1)
		return ;
	b->elem[b->top + 1] = a->elem[a->top];
	a->top -= 1;
	b->top += 1;
	a->size -= 1;
	b->size += 1;
	ft_putstr_fd("pb\n", 1);
	return ;
}
