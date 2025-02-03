/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:43:59 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/03 10:39:30 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_target(node *b, node *a, int cost)
{
    int n;
    node *tmp = a;
    node *lst;
    while (tmp != NULL && b->data > tmp->data)
    {
        tmp = tmp->data;
    }
    n = tmp->data;
    if (tmp != NULL)
    {
    lst = tmp->next;
    while (tmp != NULL)
    {
        if (n > lst->data)
                n = lst->data;
            tmp = tmp->data;
    }
    }
    return (n);
}

int find_cost(int target, node *a)
{
    int cost = 0;
    while (a != NULL)
    {
        if (target == a->data)
            return (cost);
        a = a->next;
    }
}
void ft_sort(node **a, node **b)
{
    node *tmpa = *a;

    while (count_lst(*b) != 0)
    {
        node *tmpb = *b;
        int cost = 0;
        int costa = 0;
        int target;
        while (tmpb != NULL)
        {
            target = find_target(tmpb, tmpa, cost);
            tmpb->target = target;
            costa = find_cost( target, tmpa);
            tmpb->cost = cost + costa;
            tmpb = tmpb->next;
            cost += 1;
        }
    }

}
