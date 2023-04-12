/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_utils1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:42:23 by sboetti           #+#    #+#             */
/*   Updated: 2023/04/12 10:58:16 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	*ft_tab_init(t_pile *p)
{
	int	i;
	int	*new_tab;

	i = 0;
	new_tab = malloc(sizeof(int) * p->size);
	if (!new_tab)
		return (free(new_tab), NULL);
	while (i < p->size)
	{
		new_tab[i] = p->elem[i];
		i++;
	}
	return (new_tab);
}

int	*ft_ps_sort_int_tab(t_pile *p)
{
	int	tri;
	int	i;
	int	*sorted_tab;

	i = 0;
	tri = 0;
	sorted_tab = ft_tab_init(p);
	if (!sorted_tab)
		return (free(sorted_tab), NULL);
	while (tri == 0)
	{
		tri = 1;
		while (i < p->size - 1)
		{
			if (sorted_tab[i] > sorted_tab[i + 1])
			{
				tri = 0;
				ft_swap(&sorted_tab[i], &sorted_tab[i + 1]);
				i = 0;
			}
			else
				i++;
		}
	}
	return (sorted_tab);
}
