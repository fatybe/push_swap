/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:17:50 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/01 18:33:31 by fbenjama         ###   ########.fr       */
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

char *ft_strjoin(int ac, char **av)
{
    char *str;
	int len;
	int i;
	int j;
	int k;
	
	i = 1;
	k = 0;
	len = count_array(av);
	str = malloc((len + (ac - 2) + 1));
	if (!str)
		return (NULL);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
			str[k++] = av[i][j++];
		str[k++] = 32;
		i++;
	}
	str[k] = 0;
	return (str);
}

void    ft_checkdigit(char *str)
{
    int i;

    i = 0;
    while (str[i] != 32 && (str[i] <= 9 || str[i] >= 13))
    {
        if (is_digite(str[i]) == 1)
            ft_error();
        i++;
    }
}

void	ft_checksigne(char *str)
{
	int i;

	i = 0;
	if (str[i + 1] <= '0' || str[i + 1] >= '9')
		ft_error();
}

int ft_atoi(char *str)
{
	int signe;
	int res;
    int i;

	signe = 1;
	res = 0;
    i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
    if ((str[i] == '-') || (str[i] == '+'))
	{
        if (str[i] == '-')
		    signe *= -1;
		ft_checksigne(str + i);	
		i++;
	}
    ft_checkdigit(str + i);
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * signe);
}
