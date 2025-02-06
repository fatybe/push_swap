/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 21:43:59 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/06 12:36:48 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node *min_node(node *a)
{
    node *tmp;
    
    tmp = a;
    while (tmp != NULL && (find_min(a) != tmp->data))
    {
            tmp = tmp->next;
    }
    return (tmp);
}
void find_target(node *a, node *b)
{
    node *tmp;
    node *target;
    
    while (b != NULL)
    {
        tmp = a;
        if (find_max(a) > b->data)
        {
            target = a;
            while (tmp != NULL)
            {
                if (b->data < tmp->data)
                {
                    if (tmp->data < target->data)
                        target = tmp;
                }    
                tmp = tmp->next;
            }
        }
        else if (find_max(a) < b->data)
            target = min_node(a);
        printf("%d\n",target->data);
        b->target = target;
        b = b->next;
    }
}
int    Middle_Check(node *lst, node *node)
{
    int i;

    i = 0;
    if (lst == NULL || node == NULL)
        return -1;
    while (lst != NULL)
    {
        if (lst->data == node->data)
        {
            if (i <= count_lst(lst) / 2)
                return (0);
            else if (i > count_lst(lst) / 2)
                return (1);
        }
        lst = lst->next;
        i++;
    }
    return (-1);
}
void    find_cost(node *lst)
{
    int n;
    node    *tmp;
    
    tmp = lst;
    n = 0;
    while (Middle_Check(lst, tmp) == 0)
    {
        tmp->cost = n;
        tmp = tmp->next;
        n++;
    }
    while (Middle_Check(lst, tmp) == 1)
    {
        tmp->cost = count_lst(lst) - n;
        tmp = tmp->next;
        n++;
    }
}

void ft_sort(node **a, node **b)
{
    node *tmp = *a;
    node *tmpb = *b;
   // while (count_lst(*b) != 0)
    //{
        find_target(*a, *b);
        find_cost(*a);
        find_cost(*b);
        while (tmpb != NULL)
        {
            if (tmpb->target != NULL)
                printf("Target: %d\n", tmpb->target->data);
            printf("cost  :  %d\n",tmp->cost);
            tmpb = tmpb->next;
        }
        while (tmp != NULL)
        {
            printf("cost : %d\n",tmp->cost);
            tmp = tmp->next;
        }
}
