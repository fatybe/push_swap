/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:20:28 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:03:42 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_node **head)
{
	t_node	*tmp;

	if ((*head) != NULL && (*head)->next != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = (*head)->next;
		(*head)->next = tmp;
		write(1, "sa\n", 3);
	}
}

void	swap_a_b(t_node *heada, t_node *headb)
{
	t_node	*tmp;
	t_node	*tmpb;

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
	write(1, "ss\n", 3);
}

void	push_a(t_node **heada, t_node **headb)
{
	t_node	*tmp;

	tmp = *headb;
	if (!headb)
		return ;
	*headb = (*headb)->next;
	tmp->next = *heada;
	*heada = tmp;
	write(1, "pa\n", 3);
}

void	push_b(t_node **heada, t_node **headb)
{
	t_node	*tmp;

	tmp = *heada;
	if (!heada)
		return ;
	*heada = (*heada)->next;
	tmp->next = *headb;
	*headb = tmp;
	write(1, "pb\n", 3);
}

void	rotate_a(t_node **lsta)
{
	t_node	*last;
	t_node	*tmp;

	last = *lsta;
	if (!lsta)
		return ;
	if (last && last->next)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		tmp = *lsta;
		last->next = *lsta;
		*lsta = (*lsta)->next;
		tmp->next = NULL;
	}
}
