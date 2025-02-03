/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:02:43 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/01 16:41:23 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node  *add_node(node **lst , node *newnode)
{
	node *head;
	node *last;
	
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

