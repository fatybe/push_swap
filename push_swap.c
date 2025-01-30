/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:25:41 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/30 21:37:53 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


node    *check_argv(char **arv, int arc)
{
	char *str;
	int n;
	int j;
	node *tmp;
	node *lst;
	int arr[100];
	
	j = 0;
	tmp = NULL;
	str = ft_strjoin(arv, arc);
	while(*str)
	{
		while(*str == 32)
			str++;
		n = ft_atoi(str);
		arr[j] = n;
		j++;
		lst = newnode(n);
		tmp = add_node(&tmp, lst);
		while((*str >= '0' && *str <= '9') || (*str == '-') || (*str == '+'))
			str++;
		while(*str == 32)
			str++;
	}
	arr[j] = 0;
	if (is_repeat(arr) == 1)
	{
		printf("error\n");
		return (NULL);
	}
	return (tmp);
}

int main(int ac , char **av)
{
	int i;
	node *stack_a;
	//node *stack_b;
	
	i = 1;
	if (ac > 1)
	{
		
		while (av[i])
		{
		
			if (check_error(av[i]) == 1)
			{
				printf("error\n");
				return 0;
			}  
			i++;
		}
		stack_a = check_argv(av, ac);
		//stack_b = NULL;
		while(stack_a != NULL)
		{
			printf("%d\n",stack_a->data);
			stack_a = stack_a->next;
		}
	//sort_turk(&stack_a, &stack_b);
		
	
	}
	return 0;
}