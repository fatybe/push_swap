/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:02:43 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:01:59 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*add_node(t_node **lst, t_node *newnode)
{
	t_node	*head;
	t_node	*last;

	head = *lst;
	if (lst == NULL && newnode == NULL)
		return (NULL);
	if (*lst == NULL)
	{
		*lst = newnode;
		return (*lst);
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	return (head);
}

t_node	*newnode(int n)
{
	t_node	*head;
	t_node	*lst;

	head = NULL;
	lst = malloc(sizeof(t_node));
	if (!lst)
		return (NULL);
	lst->data = n;
	lst->next = NULL;
	head = lst;
	return (head);
}
