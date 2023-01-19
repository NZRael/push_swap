/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:14:45 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/19 15:40:00 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Fonction qui malloc le bon nombres d'elem pour la pile
static int	*ft_malloc_pile(int argc, char **argv)
{
	int		*tab;
	char	**tabstr;

	tabstr = ft_split(argv[1], ' ');
	if (tabstr == NULL)
		return (free(tabstr), NULL);
	tab = malloc(sizeof(int) * (ft_tabstrlen(tabstr)));
	if (tab == NULL)
		return (free(tab), NULL);
	free(tabstr);
	return (tab);
}

//Fonction qui cree mon int* d'elem pour ma pile
//elle saisie toutes les infos de la pile dedans
static void	ft_create(t_pile *p, int argc, char **argv)
{
	int		i;
	int		*tab;
	int		size;

	i = 0;
	tab = ft_malloc_pile(argc, argv);
	if (tab == NULL)
		return (free(tab));
	size = ft_tabintlen(tab);
	while (i <= size)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	p->top = ft_tabintlen(tab);
	p->elem = tab;
	p->size = p->top;
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

	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		/*if (!ft_verifargs(argc, argv))
			return (ft_putstr_fd("Error\n", 2), 0);*/
	}
	x = argc;
	/*
	if (argc > 2)
	{
		if (!ft_verifarg(argc, argv))
			return (ft_putstr_fd("Error\n", 2), 0);
	}*/
	if (!(ft_veriff(argc, argv, &x)))
		return (ft_putstr_fd("Error\n", 2), 0);
	i = 0;
	ft_create(&a, argc, argv);
	ft_create(&b, argc, argv);
	ft_sort(&a, &b);
	return (1);
}
/*
./push "132 325 332 1"				./push 132 325 332 1
	x = argc = 2						x = argc = 5
argv = "132" "325" "3322" "1"		 argv = "push" "132" "325 "332" "1"

verif argv*/
