/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:25:43 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:08:13 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_cost(t_node *b, t_node *a)
{
	t_node	*lst;

	lst = b;
	while (lst != NULL)
	{
		if ((middle_check(b, lst) == 0 && middle_check(a, lst->target) == 0)
			|| (middle_check(b, lst) && middle_check(a, lst->target)))
		{
			if (lst->target->cost > lst->cost)
				lst->total_cost = lst->target->cost;
			else
				lst->total_cost = lst->cost;
		}
		else
			lst->total_cost = lst->cost + lst->target->cost;
		lst = lst->next;
	}
}

t_node	*find_node(t_node *b)
{
	int		min;
	t_node	*lst;

	min = b->total_cost;
	lst = b;
	while (b != NULL)
	{
		if (min > b->total_cost)
		{
			min = b->total_cost;
			lst = b;
		}
		b = b->next;
	}
	return (lst);
}
