/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:31:42 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:07:49 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*min_node(t_node *a)
{
	t_node	*tmp;

	tmp = a;
	while (tmp != NULL && (find_min(a) != tmp->data))
	{
		tmp = tmp->next;
	}
	return (tmp);
}

void	find_target(t_node *a, t_node *b)
{
	t_node	*tmp;
	t_node	*lst;
	int		max;
	t_node	*target;

	while (b != NULL)
	{
		tmp = a;
		max = INT_MAX;
		while (tmp != NULL)
		{
			lst = tmp;
			if ((b->data < tmp->data) && (lst->data < max))
			{
				max = lst->data;
				target = lst;
			}
			tmp = tmp->next;
		}
		if (find_max(a) < b->data)
			target = min_node(a);
		b->target = target;
		b = b->next;
	}
}

int	middle_check(t_node *lst, t_node *node)
{
	int	i;
	int	n;

	i = 0;
	n = count_lst(lst);
	if (lst == NULL || node == NULL)
		return (-1);
	while (lst != NULL)
	{
		if (lst == node)
		{
			if (i <= n / 2)
				return (0);
			else if (i > n / 2)
				return (1);
		}
		lst = lst->next;
		i++;
	}
	return (-1);
}

void	find_cost(t_node *lst)
{
	int		n;
	t_node	*tmp;

	tmp = lst;
	n = 0;
	while (tmp != NULL && (middle_check(lst, tmp) == 0))
	{
		tmp->cost = n;
		tmp = tmp->next;
		n++;
	}
	while (tmp != NULL && (middle_check(lst, tmp) == 1))
	{
		tmp->cost = count_lst(lst) - n;
		tmp = tmp->next;
		n++;
	}
}
