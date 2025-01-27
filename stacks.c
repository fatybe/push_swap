/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:13::04 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/18 18:25:15 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
typedef struct node {
    int data;
    struct node* next;
}node;

node *stacka(void)
{
    node *head;
    node *lst;
    head = NULL;
    lst = malloc(sizeof(node));
    if (!lst)
        return (NULL);
    lst->data = 13;
    lst->next = NULL;
    head = lst;
    lst = malloc(sizeof(node));
    if (!lst)
        return (NULL);
    lst->data = 2;
    lst->next = NULL;
    head->next = lst;
    lst = malloc(sizeof(node));
    if (!lst)
        return (NULL);
    lst->data = 67;
    lst->next = NULL;
    head->next->next = lst;
    lst = malloc(sizeof(node));
    if (!lst)
        return (NULL);
    lst->data = 98;
    lst->next = NULL;
    head->next->next->next = lst;
    lst = malloc(sizeof(node));
    if (!lst)
        return (NULL);
    lst->data = 45;
    lst->next = NULL;
    head->next->next->next->next = lst;
    lst = malloc(sizeof(node));
    if(!lst)
        return (NULL);
    lst->data = 6;
    lst->next = NULL;
    head->next->next->next->next->next = lst;
    return (head);
}
node *stackb(void)
{
    node* head = NULL;
    node* lst1;
    
    lst1 = malloc(sizeof(node));
    if(!lst1)
        return (NULL);
    lst1->data = 10;
    lst1->next = NULL;
    head = lst1;    
    lst1 = malloc(sizeof(node));
    if (!lst1)
        return (NULL);
    lst1->data = 89;
    lst1->next = NULL;
    head->next = lst1;
    lst1 = malloc(sizeof(node));
    if (!lst1)
        return (NULL);
    lst1->data = 41;
    lst1->next = NULL;
    head->next->next = lst1;
    lst1 = malloc(sizeof(node));
    if (!lst1)
        return (NULL);
    lst1->data = 8;
    lst1->next = NULL;
    head->next->next->next = lst1;
    lst1 = malloc(sizeof(node));
    if (!lst1)
        return (NULL);
    lst1->data = 30;
    lst1->next = NULL;
    head->next->next->next->next = lst1;
    lst1 = malloc(sizeof(node));
    if (!lst1)
        return (NULL);
    lst1->data = 4;
    lst1->next = NULL;
    head->next->next->next->next->next = lst1;
    return (head);
}

int main()
{
       node *tmpa = stacka();
       node *tmpb = stackb();
    while(tmpa != NULL)
    {
        printf("%d \n",tmpa->data);
        tmpa = tmpa->next;
    }
    printf("\n");
    while(tmpb != NULL)
    {
        printf("%d \n",tmpb->data);
        tmpb = tmpb->next;
    }
    printf("\n");
    node *tmp = stacka();
    node *tmp1 = stackb();
    rrr(&tmp, &tmp1);
    while(tmp != NULL)
    {
        printf("%d \n",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
     while(tmp1 != NULL)
    {
        printf("%d \n",tmp1->data);
        tmp1 = tmp1->next;
    }
}