/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:41:30 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/30 13:46:30 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_array(char ** arv)
{
	int i;
	int j;
	int count;
	
	i = 1;
	j = 0;
	while (arv[i])
	{
		count = 0;
		while (arv[i][count])
		{
				count++;
				j++;
		}
		i++;
	}
	return (j);
}
char *ft_strjoin(char **arv, int arc)
{
	char *str;
	int len;
	int i;
	int j;
	int k;
	
	i = 1;
	k = 0;
	len = count_array(arv);
	str = malloc((len + (arc - 2) + 1));
	if (!str)
		return (NULL);
	while (arv[i])
	{
		j = 0;
		while (arv[i][j])
			str[k++] = arv[i][j++];
		str[k++] = 32;
		i++;
	}
	str[k] = 0;
	return (str);
}
int ft_atoi(char *str)
{
	int signe;
	int res;
	int i;

	i = 0;
	signe = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * signe);
}
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