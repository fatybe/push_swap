/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:43:59 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/26 08:23:09 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	final_sort(t_node **a, t_node **b, t_node *cheapest)
{
	if (middle_check(*b, cheapest) == 0 && middle_check(*a,
			cheapest->target) == 0)
		while ((cheapest != *b) && (cheapest->target != *a))
			ra_rb(a, b);
	else if (middle_check(*b, cheapest) == 1 && middle_check(*a,
			cheapest->target) == 1)
		while ((cheapest != *b) && (cheapest->target != *a))
			rrr(a, b);
	while (cheapest != *b)
	{
		if (middle_check(*b, cheapest) == 0)
			rb(b);
		else if (middle_check(*b, cheapest) == 1)
			reverse_rotateb(b);
	}
	while (cheapest->target != *a)
	{
		if (middle_check(*a, cheapest->target) == 0)
			ra(a);
		else if (middle_check(*a, cheapest->target) == 1)
			reverse_rotatea(a);
	}
	push_a(a, b);
}

void	final_step(t_node **a)
{
	t_node	*lst;
	t_node	*mini;
	int		min;

	lst = *a;
	min = find_min(lst);
	mini = NULL;
	while (lst != NULL)
	{
		if (min == lst->data)
			mini = lst;
		lst = lst->next;
	}
	if (middle_check(*a, mini) == 0)
	{
		while (mini != *a)
			ra(a);
	}
	if (middle_check(*a, mini) == 1)
	{
		while (mini != *a)
			reverse_rotatea(a);
	}
}

void	ft_sort(t_node **a, t_node **b)
{
	t_node	*cheapest;

	while (*b != NULL)
	{
		find_target(*a, *b);
		find_cost(*a);
		find_cost(*b);
		final_cost(*b, *a);
		cheapest = find_node(*b);
		final_sort(a, b, cheapest);
	}
	final_step(a);
}
