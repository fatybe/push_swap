/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:29:19 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:06:22 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_node *lst)
{
	t_node	*tmp;

	while (lst != NULL)
	{
		tmp = lst->next;
		while (tmp != NULL)
		{
			if (tmp->data < lst->data)
				return (1);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	count_lst(t_node *a)
{
	int	i;

	i = 0;
	while (a != NULL)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	push_ato_b(t_node **a, t_node **b)
{
	int	min;
	int	max;
	int	n;

	min = find_min(*a);
	max = find_max(*a);
	n = min + max;
	while (count_lst(*a) > 3)
	{
		push_b(a, b);
		if ((*b)->data >= n)
			rb(b);
	}
}

int	find_max(t_node *a)
{
	int		max;
	t_node	*lst;

	lst = a;
	max = lst->data;
	while (lst != NULL && lst->next != NULL)
	{
		if (max < lst->next->data)
			max = lst->next->data;
		lst = lst->next;
	}
	return (max);
}

int	find_min(t_node *a)
{
	int		min;
	t_node	*lst;

	lst = a;
	min = lst->data;
	while (lst != NULL && lst->next != NULL)
	{
		if (min > lst->next->data)
			min = lst->next->data;
		lst = lst->next;
	}
	return (min);
}
