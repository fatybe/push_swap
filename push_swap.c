/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:56:39 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/31 18:13:17 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	empty_string(int ac, char **av)
{
	int	i;

	i = 1;
	while (i <= ac)
	{
		if (is_empty(av[i]) == 1)
			ft_error();
		i++;
	}
}

int	main(int ac, char **av)
{
	t_node	*stack;

	empty_string(ac, av);
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
