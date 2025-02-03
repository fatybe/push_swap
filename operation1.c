/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:20:28 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/01 21:21:15 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a(node **head)
{
    node    *tmp;

    tmp = *head;
    if ((*head) != NULL && (*head)->next != NULL)
    {
        tmp->data = (*head)->data;
        (*head)->data = (*head)->next->data;
        (*head)->next->data = tmp->data;
    }
    
}

void    swap_a_b(node *heada, node *headb)
{
    node    *tmp;
    node    *tmpb;

    tmp = heada;
    if (heada != NULL && heada->next != NULL)
    {
        tmp->data = heada->data;
        heada->data = heada->next->data;
        heada->next->data = tmp->data;
    }
    tmpb = headb;
    if (headb != NULL && headb->next != NULL)
    {
        tmpb->data = headb->data;
        headb->data = headb->next->data;
        headb->next->data = tmpb->data;
    }
}

void    push_a(node **heada, node **headb)
{
    node    *tmp;
    
    tmp = *headb;
    if (!headb)
        return ;
    *headb = (*headb)->next;
    tmp->next = *heada;
    *heada = tmp;
}

void    push_b(node **heada, node **headb)
{
    node    *tmp;
    
    tmp = *heada;
    if (!heada)
        return ;
    *heada = (*heada)->next;
    tmp->next = *headb;
    *headb = tmp;
}

void    rotate_a(node **lsta)
{
    node    *last;
    node    *tmp;
    
    last = *lsta;
    if (!lsta)
        return ;
    while (last->next != NULL)
    {
        last = last->next;
    }
    tmp = *lsta;
    last->next = *lsta;
    *lsta = (*lsta)->next;
    tmp->next = NULL;
}
