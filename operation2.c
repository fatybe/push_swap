/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 21:20:45 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:04:47 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_node **lstb)
{
	t_node	*last;
	t_node	*tmp;

	last = *lstb;
	if (!lstb)
		return ;
	if (last && last->next)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		tmp = *lstb;
		last->next = *lstb;
		*lstb = (*lstb)->next;
		tmp->next = NULL;
	}
}

void	ra_rb(t_node **heada, t_node **headb)
{
	if (!heada || !headb || !*heada || !*headb)
		return ;
	if (!(*heada)->next || !(*headb)->next)
		return ;
	rotate_a(heada);
	rotate_b(headb);
	write(1, "rr\n", 3);
}

void	rra(t_node **lst)
{
	t_node	*last;
	t_node	*prev;
	t_node	*head;

	last = *lst;
	if (!lst)
		return ;
	if (last && last->next)
	{
		while (last->next != NULL)
		{
			prev = last;
			last = last->next;
		}
		head = last;
		prev->next = NULL;
		last->next = *lst;
		*lst = head;
	}
}

void	rrb(t_node **lst)
{
	t_node	*last;
	t_node	*prev;
	t_node	*head;

	last = *lst;
	if (!lst)
		return ;
	if (last && last->next)
	{
		while (last->next != NULL)
		{
			prev = last;
			last = last->next;
		}
		head = last;
		prev->next = NULL;
		last->next = *lst;
		*lst = head;
	}
}

void	rrr(t_node **lsta, t_node **lstb)
{
	if (!lsta || !lstb)
		return ;
	rra(lsta);
	rrb(lstb);
	write(1, "rrr\n", 4);
}
