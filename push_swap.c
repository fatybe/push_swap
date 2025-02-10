/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:56:39 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/10 00:53:58 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    node *stack;
    
    stack = NULL;
    stack = ft_fullstack(ac, av);
    if (!stack || is_duplicate(stack) == 1)
    {
        free_stack(&stack);
        ft_error();
    }
   
    if (check_sort(stack) == 1)
        sort_turk(&stack);
    free_stack(&stack);
}
