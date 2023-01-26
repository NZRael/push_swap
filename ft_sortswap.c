/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:00:17 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/26 14:59:01 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mediane(t_pile *a, t_pile *b)
{
	int	mediane;
	int	i;

	i = 0;
	b->size = a->size;
	while (i < b->size)
	{
		b->elem[i] = a->elem[i];
		i++;
	}
	ft_sort_int_tab(b->elem, a->size);
	mediane = b->elem[b->size / 2];
	ft_bzero(b->elem, b->size);
	b->size = 0;
	ft_printf("mediane >>>> %d\n", mediane);
	return (mediane);
}

void	ft_sort(t_pile *a, t_pile *b)
{
	int	pivot;

	if (a->size < 2 || ft_issort(a))
		return ;
	pivot = ft_mediane(a, b);
	return ;
}
