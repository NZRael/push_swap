/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:07:56 by sboetti           #+#    #+#             */
/*   Updated: 2023/02/01 14:46:58 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printfpushswap/ft_printf.h"

typedef struct s_pile
{
	int		*elem;
	int		size;
	int		top;
}	t_pile;

void		ft_sa(t_pile *a);
void		ft_sb(t_pile *b);
void		ft_ss(t_pile *a, t_pile *b);
void		ft_pa(t_pile *a, t_pile *b);
void		ft_pb(t_pile *a, t_pile *b);
void		ft_ra(t_pile *a);
void		ft_rb(t_pile *b);
void		ft_rr(t_pile *a, t_pile *b);
void		ft_rra(t_pile *a);
void		ft_rrb(t_pile *b);
void		ft_rrr(t_pile *a, t_pile *b);
void		ft_sort(t_pile *a, t_pile *b);
int			ft_tabstrlen(char **tab);
int			ft_issort(t_pile *a);
int			ft_isdoubles(char *str, int argc);
int			ft_verifarg(char **argv, int x, int i);
long long	ft_psatoi(char *str);
int			ft_tabintlen(int *tab);
int			ft_veriff(int argc, char **argv, int *x);
void		ft_sort_three(t_pile *a);

#endif
