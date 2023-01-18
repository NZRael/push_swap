/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:00:17 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/18 14:38:22 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_mediane(t_pile *a)
{
	int	*tab;
	int	mediane;

	tab = a->elem;
	ft_sort_int_tab(tab, a->size);
	mediane = tab[a->size / 2];
	return (mediane);
}
/*
void	ft_sort(t_pile *a, t_pile *b)
{
	int	pivot;

	pivot = ft_mediane(a);
	return ;
}*/
