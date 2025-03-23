/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:20:28 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/23 22:50:51 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_a(node **head)
{
    node    *tmp;

    if ((*head) != NULL && (*head)->next != NULL)
    {
        tmp = *head;
        *head = (*head)->next;
        tmp->next = (*head)->next;
        (*head)->next = tmp;
    }
    write (1,"sa\n", 3);
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
    write (1,"ss\n", 3);
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
    write (1,"pa\n", 3);
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
    write (1,"pb\n", 3);
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
    write (1,"ra\n", 3);
}
