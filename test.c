#include <stdio.h>
#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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
int count_lst(node *lst)
{
    int i;
    i = 0;
    while(lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}
void push_b(node **heada, node **headb)
{
    if (!heada || !*heada)
        return ;
    node *tmp;
    tmp = *heada;
    *heada = (*heada)->next;
    tmp->next = *headb;
    *headb = tmp;
}
void ft_swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void sort_a(node **a)
{
    node *tmp = *a;
    while ((*a) != NULL)
    {
        while ((*a)->next != NULL)
        {
            if ((*a)->data < (*a)->next->data)
                ft_swap((*a)->next->data, (*a)->data);
            (*a) = (*a)->next;
        }
        (*a) = (*a)->next;
    }
    while(tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }
}
void ft_sorting(node **a, node **b)
{
    node *tmp;
    node *head;

    if ((*a) == NULL)
        return ;
    while(count_lst(*a) > 3)
    {
        push_b(a, b);
    }
    /*tmp = *a;
    while(tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }
        printf("***************\n");
    tmp = *b;
       while(tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    } */
    sort_a(a);
    /*head = *a;
   while(head != NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
    printf("\n");*/
    
}
int main()
{
    node *head = stacka();
    node *stack_b = NULL;
    node *tmp;
    tmp = head;
    while (tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    ft_sorting(&head, &stack_b);
   /*tmp = head;
    while(tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    tmp = stack_b;
    while(tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }
    */ 
}
