/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:27:43 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/30 21:05:42 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void    pusha_tob(node **a, node **b)
{
    if ((*a) == NULL)
		return ;
	while(count_lst(*a) > 3)
	{
		push_b(a, b);
	}
}

void    sort_turk(node **a, node **b)
{
    pusha_tob(a, b);
    //sort_three(a);
	node *tmp;
	tmp = *a;
	while (tmp != NULL)
	{
		printf("%d\n",tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
    tmp = *b;
	while (tmp != NULL)
	{
		printf("%d\n",tmp->data);
		tmp = tmp->next;
	}
}
