/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:20:58 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/26 15:49:57 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_pile *a)
{
	int		tmp;
	int		i;

	if (a->size < 1)
		return ;
	tmp = a->elem[a->top];
	i = a->top;
	while (i > 0)
	{
		a->elem[i] = a->elem[i - 1];
		i--;
	}
	a->elem[0] = tmp;
	ft_putstr_fd("ra\n", 1);
	return ;
}

void	ft_rb(t_pile *b)
{
	int		tmp;
	int		i;

	if (b->size < 1)
		return ;
	tmp = b->elem[b->top];
	i = b->top;
	while (i > 0)
	{
		b->elem[i] = b->elem[i - 1];
		i--;
	}
	b->elem[0] = tmp;
	ft_putstr_fd("rb\n", 1);
	return ;
}

void	ft_rr(t_pile *a, t_pile *b)
{
	int		tmp;
	int		i;

	if (a->size < 1 || b->size < 1)
		return ;
	tmp = a->elem[a->top];
	i = a->top;
	while (i > 0)
	{
		a->elem[i] = a->elem[i - 1];
		i--;
	}
	a->elem[0] = tmp;
	tmp = b->elem[b->top];
	i = b->top;
	while (i > 0)
	{
		b->elem[i] = b->elem[i - 1];
		i--;
	}
	b->elem[0] = tmp;
	ft_putstr_fd("rr\n", 1);
	return ;
}
