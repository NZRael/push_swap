/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:14:45 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/13 15:16:59 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Fonction utilise par la fonction suivante pour checker s'il y a des doublons
static int	ft_doubles(char *str, int argc)
{
	static int		i = 0;
	int				j;
	char			**tmp;

	tmp = malloc(sizeof(char *) * (argc - 1));
	if (tmp == NULL)
		return (free(tmp), 0);
	j = 0;
	tmp[i] = str;
	while (j < i)
	{
		if (ft_atoi(str) == ft_atoi(tmp[j]))
			return (0);
		j++;
	}
	i++;
	return (1);
}

//Fonction qui verifie si les argumens entres sont valides
//en utilisant la fonction precedente
static int	ft_verifarg(int argc, char **argv)
{
	long long		i;

	i = 1;
	if (argc > 2)
	{
		while (i <= argc)
		{
			if (ft_atoi(argv[i]) > -2147483648
				&& ft_atoi(argv[i]) < 2147483647)
			{
				if (ft_doubles(argv[i], argc))
					i++;
			}
			else
				return (0);
		}
		return (1);
	}
	return (0);
}

//Fonction qui malloc le bon nombres d'elem pour la pile
static int	*ft_malloc_pile(int argc)
{
	int		*tab;
	int		i;

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

	if (ft_verifarg(argc, argv))
	{
		i = 0;
		ft_create(&a, argc, argv);
		ft_create(&b, argc, argv);
		//IL FAUT COMMENCER A ENTRER DANS LES TRIS;
		return (1);
	}
	ft_putstr_fd("Error\n", 2);
	return (0);
}
