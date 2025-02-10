/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:26:14 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/10 00:56:34 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_turk(node **a)
{
    node *b;
   // node *stack;

    b = NULL;
    push_ato_b(a, &b);
    if (check_sort(*a) == 1)
        sort_three(a);
   //stack = *a;
   /* while (stack != NULL)
    {
        printf("%d\n",stack->data);
        stack = stack->next;
    }
   printf("###\n");
    stack = b;
    while (stack != NULL)
    {
        printf("%d\n",stack->data);
        stack = stack->next;
    }
    printf("******\n\n");*/
    ft_sort(a, &b);
}
