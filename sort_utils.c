/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:29:19 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/23 22:20:10 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_sort(node *lst)
{
    node *tmp;
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
int count_lst(node *a)
{
    int i;

    i = 0;
    while (a != NULL)
    {
        i++;
        a = a->next;
    }
    return (i);
}

void push_rest(node **a, node **b, int size)
{
	if (count_lst(*a) > 3)
	{
		if ((*a)->rank < size)
			push_b(a, b);
		else
			rotate_a(a);
	}
	
}
void   push_ato_b(node **a, node **b)
 {
	int min = find_min(*a);
	int max = find_max(*a);
	int n = min + max;
	while (count_lst(*a) > 3)
	{
		push_b(a, b);
		if ((*b)->data >= n)
			rotate_b(b);
	}
 }

 int find_max(node *a)
{
	int max;
	node *lst;

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
 int find_min(node *a)
{
	int min;
	node *lst;

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

 void    sort_three(node **a)
{
	int max;
	node *tmp;

	max = find_max(*a);
	tmp = *a;
	if (max == tmp->data)
		rotate_a(a);
	else if (max == tmp->next->data)
		rra(a);
	if (check_sort(*a) == 1)
		swap_a(a);
}
