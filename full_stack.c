/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:57:22 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/31 18:10:41 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*creat_stack(char *str)
{
	t_node	*lst;
	t_node	*tmp;
	long	n;
	int		i;

	tmp = NULL;
	i = 0;
	while (str[i])
	{
		while (str[i] == 32)
			i++;
		n = ft_atoi(str + i);
		lst = newnode(n);
		tmp = add_node(&tmp, lst);
		while ((str[i] >= '0' && str[i] <= '9') || (str[i] == '-')
			|| (str[i] == '+'))
			i++;
		while (str[i] == 32)
			i++;
	}
	return (tmp);
}

int	validate_input(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
			if (str[i] < '0' || str[i] > '9')
				return (1);
		}
		if (str[i] && (str[i] < '0' || str[i] > '9'))
			return (1);
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] && (str[i] != 32 && (str[i] < 9 || str[i] > 13)))
			return (1);
	}
	return (0);
}

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (0);
	else
		return (1);
}

int	is_empty(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (ft_isspace(*str) == 1)
			return (0);
		str++;
	}
	return (1);
}

t_node	*ft_fullstack(int ac, char **av)
{
	char	*str;
	t_node	*tmp;

	if (ac < 2)
	{
		exit(0);
	}
	else
	{
		str = ft_strjoin(ac, av);
		if (!str)
			return (NULL);
		if (validate_input(str) == 1)
		{
			free(str);
			ft_error();
		}
		tmp = creat_stack(str);
		free(str);
		if (!tmp)
			return (NULL);
	}
	return (tmp);
}
