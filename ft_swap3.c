/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:24:46 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/13 10:43:02 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_pile a)
{
	int		tmp;
	int		i;

	if (a.top < 1)
		return ;
	tmp = a.elem[0];
	i = 0;
	while (i < a.top)
	{
		a.elem[i] = a.elem[i + 1];
		i++;
	}
	a.elem[a.top] = tmp;
	ft_putstr_fd("rra\n", 1);
	return ;
}

void	ft_rrb(t_pile b)
{
	int		tmp;
	int		i;

	if (b.top < 1)
		return ;
	tmp = b.elem[0];
	i = 0;
	while (i < b.top)
	{
		b.elem[i] = b.elem[i + 1];
		i++;
	}
	b.elem[b.top] = tmp;
	ft_putstr_fd("rrb\n", 1);
	return ;
}

void	ft_rrr(t_pile a, t_pile b)
{
	ft_rra(a);
	ft_rrb(b);
	ft_putstr_fd("rrr\n", 1);
	return ;
}
