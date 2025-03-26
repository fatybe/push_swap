/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:37:52 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:00:33 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(t_node *stack)
{
	t_node	*tmp;
	t_node	*lst;

	lst = stack;
	while (lst != NULL)
	{
		tmp = lst->next;
		while (tmp != NULL)
		{
			if (lst->data == tmp->data)
				return (1);
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (0);
}
