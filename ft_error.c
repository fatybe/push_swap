/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:34:00 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/25 22:00:58 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_node **a)
{
	t_node	*lst;
	t_node	*next;

	if (!a || !*a)
		return ;
	lst = *a;
	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	*a = NULL;
}

void	free_all(t_node **a, t_node **b)
{
	free_stack(a);
	free_stack(b);
}

int	is_digite(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

void	ft_error(void)
{
	write(1, "ERROR\n", 6);
	exit(0);
}
