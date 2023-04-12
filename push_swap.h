/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:07:56 by sboetti           #+#    #+#             */
/*   Updated: 2023/04/12 10:58:30 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

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
int			*ft_ps_sort_int_tab(t_pile *p);
int			ft_issort(t_pile *a);
int			ft_isdoubles(char *str, int argc);
int			ft_verifarg(char **argv, int x, int i);
long long	ft_psatoi(char *str);
int			ft_tabintlen(int *tab);
int			ft_veriff(int argc, char **argv, int *x);
void		ft_sort_three(t_pile *a);
void		ft_sort_four(t_pile *a, t_pile *b);
void		ft_sort_five(t_pile *a, t_pile *b);
void		ft_sort_ten(t_pile *a, t_pile *b);
void		ft_sort_hundred(t_pile *a, t_pile *b);
void		ft_sort_fivehundred(t_pile *a, t_pile *b);
void		ft_sort_rest(t_pile *a, t_pile *b);
void		ft_sort_more_rest(t_pile *a, t_pile *b, int size);
void		ft_sort_rest_hundred(t_pile *a, t_pile *b);
int			ft_get_min(t_pile *p);
void		ft_get_max(t_pile *b);
int			ft_r_or_rr(t_pile *p, int x);
void		ft_push_index(t_pile *a, t_pile *b, int key);
void		ft_find_smallest_ten(t_pile *a);
int			ft_keynumber(int *sorted_tab, int size, int divided, int chunk);
void		printpile(t_pile a);

#endif
