/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:09:44 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:05:20 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotateb(t_node **b)
{
	if (*b && (*b)->next)
	{
		rrb(b);
		write(1, "rrb\n", 4);
	}
}

void	reverse_rotatea(t_node **a)
{
	if (*a && (*a)->next)
	{
		rrb(a);
		write(1, "rra\n", 4);
	}
}

void	ra(t_node **a)
{
	if ((*a) && (*a)->next)
	{
		rotate_a(a);
		write(1, "ra\n", 3);
	}
}

void	rb(t_node **b)
{
	if (*b && (*b)->next)
	{
		rotate_a(b);
		write(1, "rb\n", 3);
	}
}
