/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operating.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:15:10 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/21 15:05:10 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(node *head)
{
    if (head != NULL && head->next != NULL)
    {
        node *tmp;
        tmp->data = head->data;
        head->data = head->next->data;
        head->next->data = tmp->data;
    }
    
}
void swap_b(node *head)
{
    if (head != NULL && head->next != NULL)
    {
        int tmp;
        tmp = head->data;
        head->data = head->next->data;
        head->next->data = tmp;
    }
    
}
void swap_a_b(node *heada, node *headb)
{
    if(heada != NULL && heada->next != NULL)
    {
        node *tmp;
        tmp->data = heada->data;
        heada->data = heada->next->data;
        heada->next->data = tmp->data;
    }
    if(headb != NULL && headb->next != NULL)
    {
        node *tmpb;
        tmpb->data = headb->data;
        headb->data = headb->next->data;
        headb->next->data = tmpb->data;
    }
}
//as: push_a
void push_a(node **heada, node **headb)
{
    if (!headb)
        return ;
    node *tmp;
    tmp = *headb;
    *headb = (*headb)->next;
    tmp->next = *heada;
    *heada = tmp;
}
void push_b(node **heada, node **headb)
{
    if (!heada)
        return ;
    node *tmp;
    tmp = *heada;
    *heada = (*heada)->next;
    tmp->next = *headb;
    *headb = tmp;
}
void rotate_a(node **lsta)
{
    if (!lsta)
        return ;
    node *last = *lsta;
    node *tmp;
    while (last->next != NULL)
    {
        last = last->next;
    }
    tmp = *lsta;
    last->next = *lsta;
    *lsta = (*lsta)->next;
    tmp->next = NULL;
}
void rotate_b(node **lstb)
{
    if (!lstb)
        return ;
    node *last = *lstb;
    node *tmp;
    while (last->next != NULL)
    {
        last = last->next;
    }
    tmp = *lstb;
    last->next = *lstb;
    *lstb = (*lstb)->next;
    tmp->next = NULL;
}
void ra_rb(node **heada, node **headb)
{
    if (!heada || !headb || !*heada || !*headb)
        return ;
    if (!(*heada)->next || !(*headb)->next)
        return ;
    node *lasta = *heada;
    node *tmpa;
    node *lastb;
    node *tmpb; 
    while (lasta->next != NULL)
    {
        lasta = lasta->next;
    }
    tmpa = *heada;
    lasta->next = *heada;
    *heada = (*heada)->next;
    tmpa->next = NULL;
    lastb = *headb;
    while (lastb->next != NULL)
    {
        lastb = lastb->next;
    }
    tmpb = *headb;
    lastb->next = *headb;
    *headb = (*headb)->next;
    tmpb->next = NULL;
    
}
void rra(node **lst)
{
    if (!lst)
        return ;
    node *last = *lst;
    node *prev;
    node *head;
    while(last->next != NULL)
    {
        prev = last;
        last = last->next;
    }
    head = last;
    prev->next = NULL;
    last->next = *lst;
    *lst = head;
}
void rrb(node **lst)
{
    if (!lst)
        return ;
    node *last = *lst;
    node *prev;
    node *head;
    while(last->next != NULL)
    {
        prev = last;
        last = last->next;
    }
    head = last;
    prev->next = NULL;
    last->next = *lst;
    *lst = head;
}
void rrr(node **lsta, node **lstb)
{
    if (!lsta || !lstb)
        return ;
    node *lasta = *lsta;
    node *lastb = *lstb;
    node *preva;
    node *prevb;
    node *heada;
    node *headb;
    while (lasta->next != NULL)
    {
        preva = lasta;
        lasta = lasta->next;
    }
    heada = lasta;
    preva->next = NULL;
    lasta->next = *lsta;
    *lsta = heada;
    while(lastb->next != NULL)
    {
        prevb = lastb;
        lastb = lastb->next;
    }
    headb = lastb;
    prevb->next = NULL;
    lastb->next = *lstb;
    *lstb = headb;
}