/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:25:43 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/09 11:35:56 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    final_cost(node *b)
{
    while (b != NULL)
    {
        b->total_cost = b->cost + b->target->cost;
        b = b->next;
    }
}
node    *find_node(node *b)
{
    int     min;
    node    *lst;

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

int ft_check(node *a)
{
    int arr[count_lst(a)];
    int i;
    int middle;
    node    *lst;


    i = 0;
    lst = a;
    while (lst != NULL)
    {
        arr[i] = lst->data;
        lst = lst->next;
    }
    middle = i / 2;
    if (a->data > arr[middle])
        return (1);
    else
        return (0);
} 
