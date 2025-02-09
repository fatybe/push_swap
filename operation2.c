/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:20:45 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/08 16:45:55 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate_b(node **lstb)
{
    node    *last;
    node    *tmp;

    last = *lstb;
    if (!lstb)
        return ;
    
    while (last->next != NULL)
    {
        last = last->next;
    }
    tmp = *lstb;
    last->next = *lstb;
    *lstb = (*lstb)->next;
    tmp->next = NULL;
    write (1,"rb\n", 3);
}
void ra_rb(node **heada, node **headb)
{
    node    *lasta; 
    node    *tmpa;
    node    *lastb;
    node    *tmpb;
    
    if (!heada || !headb || !*heada || !*headb)
        return ;
    if (!(*heada)->next || !(*headb)->next)
        return ;
    lasta = *heada;
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
    write (1,"rab\n", 4);
}
void rra(node **lst)
{
    node    *last;
    node    *prev;
    node    *head;

    last = *lst;
    if (!lst)
        return ;
    
    while(last->next != NULL)
    {
        prev = last;
        last = last->next;
    }
    head = last;
    prev->next = NULL;
    last->next = *lst;
    *lst = head;
    write (1,"rra\n", 4);
}
void rrb(node **lst)
{
    node    *last;
    node    *prev;
    node    *head;

    last = *lst;
    if (!lst)
        return ;
    
    while(last->next != NULL)
    {
        prev = last;
        last = last->next;
    }
    head = last;
    prev->next = NULL;
    last->next = *lst;
    *lst = head;
    write (1,"rrb\n", 4);
}
void rrr(node **lsta, node **lstb)
{
    
    node    *lasta;
    node    *lastb;
    node    *preva;
    node    *prevb;
    node    *heada;
    node    *headb;
    
    lasta = *lsta;
    lastb = *lstb;
    if (!lsta || !lstb)
        return ;
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
    write (1,"rrr\n", 4);
}
