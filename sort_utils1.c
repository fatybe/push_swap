/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:43:59 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/23 22:40:54 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    final_sort(node **a, node **b, node *cheapest)
{
    if (Middle_Check(*b, cheapest) == 0 && Middle_Check(*a, cheapest->target) == 0)
        while ((cheapest != *b) && (cheapest->target != *a))
            ra_rb(a, b); 
    else if (Middle_Check(*b, cheapest) == 1  && Middle_Check(*a, cheapest->target) == 1)
        while ((cheapest != *b) && (cheapest->target != *a))
            rrr(a, b); 
    while (cheapest != *b)
    {
        if (Middle_Check(*b, cheapest) == 0)
            rotate_b(b);
        else if (Middle_Check(*b, cheapest) == 1)
            rrb(b);
    }
     while (cheapest->target != *a)
    {
        if (Middle_Check(*a, cheapest->target) == 0)
            rotate_a(a);
        else if (Middle_Check(*a, cheapest->target) == 1)
            rra(a);
    }
    push_a(a, b);
}

void final_step(node **a)
{
    node *lst;
    node    *mini;
    int min;

    lst = *a;
    min = find_min(lst);
    mini = NULL;
    while (lst != NULL)
    {
        if (min == lst->data)
            mini = lst;
        lst = lst->next;
    }
    if (Middle_Check(*a, mini) == 0)
    {
        while (mini != *a)
            rotate_a(a);
    }
    if (Middle_Check(*a, mini) == 1)
    {
        while (mini != *a)
            rra(a);
    }
}

void ft_sort(node **a, node **b)
{
    node    *cheapest;

    while (*b != NULL)
    {
        find_target(*a, *b);
        find_cost(*a);
        find_cost(*b);
        final_cost(*b, *a);
        cheapest = find_node (*b);
        final_sort(a, b, cheapest);
    }
    final_step(a);
    // node *tmp = *a;
    // while (tmp != NULL)
    // {
    //     printf("%d\n",tmp->data);
    //     tmp = tmp->next;
    // }
}
