/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:14:45 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/18 15:54:34 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Fonction qui malloc le bon nombres d'elem pour la pile
static int	*ft_malloc_pile(int argc)
{
	int		*tab;

	tab = malloc(sizeof(int) * (argc - 1));
	if (tab == NULL)
		return (free(tab), NULL);
	return (tab);
}

//Fonction qui cree mon int* d'elem pour ma pile
//elle saisie toutes les infos de la pile dedans
static void	ft_create(t_pile *p, int argc, char **argv)
{
	int		i;
	int		*tab;

	i = 0;
	tab = ft_malloc_pile(argc);
	if (tab == NULL)
		return (free(tab));
	while (i < argc)
	{
		tab[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	p->top = argc - 1;
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

	if (!ft_verifarg(argc, argv))
		return (ft_putstr_fd("Error\n", 2), 0);
	if (argc == 2)
	{
		if (!ft_verifargs(argc, argv))
			return (ft_putstr_fd("Error\n", 2), 0);
	}
	i = 0;
	ft_create(&a, argc, argv);
	ft_create(&b, argc, argv);
	ft_sort(&a, &b);
	return (1);
}
