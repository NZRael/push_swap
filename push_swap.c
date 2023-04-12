/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:14:45 by sboetti           #+#    #+#             */
/*   Updated: 2023/04/12 10:46:17 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Fonction qui malloc le bon nombres d'elem pour la pile
static int	*ft_malloc_pile(int x)
{
	int		*tab;

	tab = malloc(sizeof(int) * x);
	if (tab == NULL)
		return (free(tab), NULL);
	return (tab);
}

//Fonction qui cree mon int* d'elem pour ma pile
//elle saisie toutes les infos de la pile dedans
static void	ft_create_a(t_pile *a, int x, char **argv, int argc)
{
	int		*tab;
	int		i;

	tab = ft_malloc_pile(x);
	if (tab == NULL)
		return (free(tab));
	a->top = x - 1;
	a->size = x;
	i = 0;
	if (argc > 2)
	{
		while (x > 0)
			tab[i++] = ft_psatoi(argv[x--]);
	}
	else
	{
		while (x > 0)
			tab[i++] = ft_psatoi(argv[--x]);
	}
	a->elem = tab;
	return ;
}

static void	ft_create_b(t_pile *b, int x)
{
	int		*tab;

	tab = ft_malloc_pile(x);
	if (tab == NULL)
		return (free(tab));
	b->top = -1;
	b->elem = tab;
	b->size = 0;
	return ;
}

//Programme qui va initier les piles avec les arguments donnes
//et la trie parfaitement
int	main(int argc, char **argv)
{
	t_pile	a;
	t_pile	b;
	int		x;

	if (argc == 1)
		return (0);
	x = argc;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		x = ft_tabstrlen(argv);
		if (x == 2)
			argc = 1;
	}
	if (!(ft_veriff(argc, argv, &x)))
		return (ft_putstr_fd("Error\n", 2), 0);
	if (argc > 2)
		x = argc - 1;
	else
		x = ft_tabstrlen(argv);
	ft_create_a(&a, x, argv, argc);
	ft_create_b(&b, x);
	ft_sort(&a, &b);
	return (0);
}
