/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:25:41 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/26 11:56:25 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int count_array(char ** arv)
{
    int i;
    int j;
    int count;
    
    i = 1;
    j = 0;
    while (arv[i])
    {
        count = 0;
        while (arv[i][count])
        {
                count++;
                j++;
        }
        i++;
    }
    return (j);
}
char *ft_strjoin(char **arv, int arc)
{
    char *str;
    int len;
    int i;
    int j;
    int k;
    
    i = 1;
    k = 0;
    len = count_array(arv);
    str = malloc((len + (arc - 2) + 1));
    if (!str)
        return (NULL);
    while (arv[i])
    {
        j = 0;
        while (arv[i][j])
            str[k++] = arv[i][j++];
        str[k++] = 32;
        i++;
    }
    str[k] = 0;
    return (str);
}
int ft_atoi(char *str)
{
    int signe;
    int res;
    int i;

    i = 0;
    signe = 1;
    res = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        signe *= -1;
        i++;
    }
    while ((str[i] >= '0' && str[i] <= '9'))
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * signe);
}
node  *add_node(node **lst , node *newnode)
{
    node *head = *lst;
    node *last = *lst;
    if (lst == NULL && newnode == NULL)
        return (NULL);   
    if (*lst == NULL)
    {
        *lst = newnode;
        return (*lst);
    }
    
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newnode;
    return (head);
}

node *newnode(int n)
{
    node* head = NULL;
    node* lst;
    lst = malloc(sizeof(node));
    if (!lst)
        return (NULL);
    lst->data = n;
    lst->next = NULL;
    head = lst;
    return (head);
}
 int check(int arr[])
{
    int i;
    int j;
    int k;

    i = 0;
    j = 0;
    while(arr[j])
        j++;
    while (arr[i])
    {
        k = 1;
        while(k < j)
        {
            if (arr[i] == arr[k + i])
                return (1);
            k++;
        }
        i++;
    }
    return (0);
}
node *check_args(char **arv, int arc)
{
    char *str;
    int n;
    int j;
    node *tmp;
    node *lst;
    int arr[100];
    
    j = 0;
    tmp = NULL;
    str = ft_strjoin(arv, arc);
    //printf("%s\n",str);
    while(*str)
    {
    while(*str == 32)
        str++;
    n = ft_atoi(str);
    arr[j] = n;
    //printf("%d\n",arr[j]);
     j++;
    lst = newnode(n);
    tmp = add_node(&tmp, lst);
    while((*str >= '0' && *str <= '9') || (*str == '-') || (*str == '+'))
        str++;
    while(*str == 32)
        str++;
    }
    arr[j] = 0;
    if (check(arr) == 1)
    {
        printf("error\n");
        return (NULL);
    }
    return (tmp);
}
int check_signe(char *s)
{
    int i = 0;
    while(s[i])
    {
        if ((s[i] < '0' || s[i] > '9') && (s[i] != '-') && (s[i] != '+') && (s[i] != 32))
            return (1);
            i++;
    }
    i = 0;
    while (s[i] == 32)
        i++;
    if ((s[i] == '+' || s[i] == '-') && (s[i + 1] < '0' || s[i + 1] > '9'))
        return 1;
    while (s[i] >= '0' && s[i] <= '9')
        i++;
    while (s[i])
    {
        if ((s[i] == '+' || s[i] == '-') && i != 0)
        {
            if (s[i - 1] != 32)
                return (1);
            i++;
            if (s[i] < '0' || s[i] > '9')
                return (1);
        }
        i++;
    }
     return (0);
}
int check_error(char *arv)
{
    int i;
    i = 0;
   while(arv[i])
    {
        if (arv[i] == '-' || arv[i] == '+')
        {
            if(check_signe(arv) == 1)
                return (1);
        } 
            i++;
    }
    i = 0;
    while(arv[i])
    {
        while (arv[i] == 32)
            i++;
        if ((arv[i] < '0' || arv[i] > '9') && (arv[i] != '-') && (arv[i] != '+'))
            return (1);
            i++;  
        while (arv[i] == 32)
            i++;
    }
    return (0);
}
int main(int arc , char **arv)
{
    int i;
    node *stack;
    
    i = 1;
    if (arc > 1)
    {
        while (arv[i])
        {
            if (check_error(arv[i]) == 1)
            {
                printf("error\n");
                return 0;
            }  
            i++;
        }
       stack = check_args(arv, arc);
       while(stack != NULL)
       {
        printf("%d\n",stack->data);
        stack = stack->next;
       }
    }
    return 0;
}