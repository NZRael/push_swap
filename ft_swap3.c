/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:24:46 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/26 15:16:33 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_pile *a)
{
	int		tmp;
	int		i;

	if (a->size < 1)
		return ;
	tmp = a->elem[0];
	i = 0;
	while (i < a->top)
	{
		a->elem[i] = a->elem[i + 1];
		i++;
	}
	a->elem[a->top] = tmp;
	ft_putstr_fd("rra\n", 1);
	return ;
}

void	ft_rrb(t_pile *b)
{
	int		tmp;
	int		i;

	if (b->size < 1)
		return ;
	tmp = b->elem[0];
	i = 0;
	while (i < b->top)
	{
		b->elem[i] = b->elem[i + 1];
		i++;
	}
	b->elem[b->top] = tmp;
	ft_putstr_fd("rrb\n", 1);
	return ;
}

void	ft_rrr(t_pile *a, t_pile *b)
{
	int		tmp;
	int		i;

	if (a->size < 1 || b->size < 1)
		return ;
	tmp = a->elem[0];
	i = 0;
	while (i < a->top)
	{
		a->elem[i] = a->elem[i + 1];
		i++;
	}
	a->elem[a->top] = tmp;
	tmp = b->elem[0];
	i = 0;
	while (i < b->top)
	{
		b->elem[i] = b->elem[i + 1];
		i++;
	}
	b->elem[b->top] = tmp;
	ft_putstr_fd("rrr\n", 1);
	return ;
}
