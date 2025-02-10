/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:25:43 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/10 01:12:44 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    final_cost(node *b, node *a)
{
    node *lst;

    lst = b;
    while (lst != NULL)
    {
        if ((Middle_Check(b, lst) == 0 && Middle_Check(a, lst->target) == 0)
        || (Middle_Check(b, lst) && Middle_Check(a, lst->target)))
            if (lst->target->cost > lst->cost)
                lst->total_cost = lst->target->cost;
            else
                lst->total_cost = lst->cost;
        else
            lst->total_cost = lst->cost + lst->target->cost;
        lst = lst->next;
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

void bubble_sort(int *arr, int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}
void ft_rank_util(node *lst, int *arr)
{
    int size;
    int j;

    size = count_lst(lst);
    j = 0;
    while (lst != NULL)
    {
        while (j < size)
        {
            if (lst->data == arr[j])
            {
                lst->rank = j + 1;
                break;
            }
            j++;   
        }
        lst = lst->next;
    }
}
void ft_rank(node *a)
{
    int *arr;
    int i;
    node    *lst;


    i = 0;
    lst = a;
    arr = malloc( count_lst(a) * sizeof(int));
    if (!arr)
        return ;
    while (lst != NULL)
    {
        arr[i] = lst->data;
        lst = lst->next;
        i++;
    }
    bubble_sort(arr, i);
    ft_rank_util(a, arr);
    free(arr);
}
