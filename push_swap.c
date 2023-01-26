/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:14:45 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/26 16:00:40 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Fonction qui malloc le bon nombres d'elem pour la pile
static int	*ft_malloc_pile(int x)
{
	int		*tab;

	//ft_printf("x >>> %d dans le malloc\n", x);
	tab = malloc(sizeof(int) * x);
	if (tab == NULL)
		return (free(tab), NULL);
	return (tab);
}

//Fonction qui cree mon int* d'elem pour ma pile
//elle saisie toutes les infos de la pile dedans
static void	ft_create_a(t_pile *a, int x, char **argv, int argc)
{
	int		i;
	int		*tab;

	i = 0;
	tab = ft_malloc_pile(x);
	if (tab == NULL)
		return (free(tab));
	while (i < x)
	{
		if (argc > 2)
			tab[i] = ft_psatoi(argv[i + 1]);
		else
			tab[i] = ft_psatoi(argv[i]);
		i++;
	}
	a->top = x - 1;
	a->elem = tab;
	a->size = x;
	return ;
}

static void	ft_create_b(t_pile *b, int x)
{
	int		i;
	int		*tab;

	i = 0;
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
	int		i;
	int		x;

	x = argc;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		x = ft_tabstrlen(argv);
		if (x == 2)
			argc = 1;
	}
	if (!(ft_veriff(argc, argv, &x)))
		return (ft_putstr_fd("Error\n", 1), 0);
	i = 0;
	if (argc > 2)
		x = argc - 1;
	else
		x = ft_tabstrlen(argv);
	ft_create_a(&a, x, argv, argc);
	ft_create_b(&b, x);
	int	z = 0;
	ft_printf("a.top ---> %d\n", a.top);
	ft_printf("a.size ---> %d\n", a.size);
	while (z < a.size)
	{
		ft_printf("[%d]", a.elem[z]);
		z++;
	}
	ft_printf("\n");
	ft_sort(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_pb(&a, &b);
	ft_rb(&b);
	z = 0;
	while (z < a.size)
	{
		ft_printf("[%d]", a.elem[z]);
		z++;
	}
	ft_printf("\n");
	z = 0;
	while (z < b.size)
	{
		ft_printf("[%d]", b.elem[z]);
		z++;
	}
	ft_printf("\n");

	return (0);
}
/*
./push "132 325 332 1"				./push 132 325 332 1
	x = argc = 2						x = argc = 5
argv = "132" "325" "3322" "1"		 argv = "push" "132" "325 "332" "1"
	x = 4								x = argc = 5
verif argv

faire les plus petit qui deviennent 1, 2, 3,........., n
*/
