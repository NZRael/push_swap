/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verifs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:32:51 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/19 15:40:24 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Fonction utilisée par la fonction suivante pour checker s'il y a des doublons
int	ft_isdoubles(char *str, int x)
{
	static int		i = 0;
	int				j;
	char			**tmp;

	tmp = malloc(sizeof(char *) * (x));
	if (tmp == NULL)
		return (free(tmp), 0);
	j = 0;
	tmp[i] = str;
	while (j < i)
	{
		if (ft_atoi(str) == ft_atoi(tmp[j]))
			return (free(tmp), 0);
		j++;
	}
	i++;
	return (1);
}

//Fonction qui verifie si les arguments entrés sont valides
//en utilisant la fonction précédente
int	ft_verifarg(char **argv, int *x, int i)
{
	while (i <= *x)
	{
		if (ft_atoi(argv[i]) >= -2147483648 && ft_atoi(argv[i]) <= 2147483647)
		{
			if (!(ft_isdoubles(argv[i], *x)))
				return (0);
			else
				i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
   int	ft_verifargs(int argc, char **argv)
   {
   int		i;
   char	**tab;

   i = 0;
   tab = ft_split(argv[1], ' ');
   if (tab == NULL)
   return (0);
   while (i < ft_tabstrlen(tab))
   {
   if (ft_atoi(tab[i]) >= -2147483648 && ft_atoi(tab[i]) <= 2147483647)
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
   */
int	ft_veriff(int argc, char **argv, int *x)
{
	int	i;
	int	res;

	res = 0;
	if (*x == argc)
	{
		i = 1;
		res = ft_verifarg(argv, x, i);
		return (res);
	}
	else
	{
		i = 0;
		res = ft_verifarg(argv, x, i);
		return (res);
	}
}
