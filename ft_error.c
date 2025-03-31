/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:34:00 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/27 21:14:10 by fbenjama         ###   ########.fr       */
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

int	is_digite(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}
