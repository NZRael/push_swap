/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:07:56 by sboetti           #+#    #+#             */
/*   Updated: 2023/01/13 15:29:25 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printfpushswap/libft/libft.h"

typedef struct s_pile
{
	int		*elem;
	int		size;
	int		top;
}	t_pile;

void	ft_sa(t_pile a);
void	ft_sb(t_pile b);
void	ft_ss(t_pile a, t_pile b);
void	ft_pa(t_pile a, t_pile b);
void	ft_pb(t_pile a, t_pile b);
void	ft_ra(t_pile a);
void	ft_rb(t_pile b);
void	ft_rr(t_pile a, t_pile b);
void	ft_rra(t_pile a);
void	ft_rrb(t_pile b);
void	ft_rrr(t_pile a, t_pile b);

#endif
