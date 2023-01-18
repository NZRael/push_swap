/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verifs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:32:51 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/18 15:54:32 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Fonction utilise par la fonction suivante pour checker s'il y a des doublons
int	ft_doubles(char *str, int argc)
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
int	ft_verifarg(int argc, char **argv)
{
	int	i;

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
				else
					return (0);
			}
			else
				return (0);
		}
		return (1);
	}
	return (0);
}

int	ft_verifargs(int argc, char **argv)
{
	int		i;
	char	**tab;

	i = 1;
	tab = ft_split(argv[1], ' ');
	if (tab == NULL)
		return (0);
	while (i < ft_tablen(tab))
	{
		if (ft_atoi(tab[i]) > -2147483648 && ft_atoi(tab[i]) < 2147483647)
		{
			if (ft_doubles(tab[i], argc))
				i++;
			else
				return (0);
		}
		else
			return (0);
	}
	return (1);
}
