/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:38:25 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/30 21:24:31 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int check_signe(char *s)
{
	int i = 0;
	while(s[i])
	{
		if ((s[i] < '0' || s[i] > '9') && (s[i] != '-') && (s[i] != '+') && (s[i] != 32))
			return (1);
		i++;
	}
	i = 0;
	while (s[i] == 32)
		i++;
	if ((s[i] == '+' || s[i] == '-') && (s[i + 1] < '0' || s[i + 1] > '9'))
		return 1;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	while (s[i])
	{
		if ((s[i] == '+' || s[i] == '-') && i != 0)
		{
			if (s[i - 1] != 32)
				return (1);
			i++;
			if (s[i] < '0' || s[i] > '9')
				return (1);
		}
		i++;
	}
	 return (0);
}
int check_error(char *arv)
{
	int i;
	i = 0;
   while (arv[i])
	{
		if (arv[i] == '-' || arv[i] == '+')
		{
			if(check_signe(arv) == 1)
				return (1);
		} 
			i++;
	}
	i = 0;
	while (arv[i])
	{
		while (arv[i] == 32 || arv[i] == 9)
			i++;
		if ((arv[i] < '0' || arv[i] > '9') && (arv[i] != '-') && (arv[i] != '+'))
			return (1);
		else
			i++;
		//while (arv[i] != 32)
			//i++;
	}
	return (0);
}
int is_repeat(int arr[])
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while(arr[j])
		j++;
	while (arr[i])
	{
		k = 1;
		while(k <= j)
		{
			if (arr[i] == arr[k + i])
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}
