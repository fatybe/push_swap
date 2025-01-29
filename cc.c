#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

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
void sort_a(node **a)
{
    node *start;
    node *ptr;

    start = *a;
    while (start != NULL)
    {
        ptr = start->next;
        while (ptr != NULL)
        {
            if (start->data > ptr->data)
                ft_swap(ptr->data, start->data);
            ptr = ptr->next;
        }
        start = start->next;
    }
}