/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:31:42 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/06 11:05:04 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_min_cost(node *a)
{
	int min;
	node *lst;

	lst = a;
	min = lst->cost;
	while (lst != NULL && lst->next != NULL)
	{
		if (min > lst->next->cost)
			min = lst->next->cost;
		lst = lst->next;
	}
	return (min);
}
// void	ft_finalsort(node **a, node **b, int i, int n)
// {
	
// }
void    ft_pushb_to_a(node **a, node **b)
{
	node *lst;
	node *lsta;
	int n;
	int i;

	lst = *b;
	lsta = *a;
	n = 0;
	while (lst != NULL && (find_min_cost(*b) != lst->cost))
	{
		lst = lst->next;
		n++;
	}
	i = 0;
	while (lsta != NULL && (lst->target != lsta->data))
	{
		lsta = lsta->next;
		i++;
	}
	ft_finalsort(a, b, i, n);
}
