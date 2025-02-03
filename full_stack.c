/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:57:22 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/01 16:52:31 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
node *creat_stack(char *str)
{
    node *lst;
    node *tmp;
    int n;

    tmp = NULL;
    while (*str)
        {
            while (*str == 32)
                str++;
            n = ft_atoi(str);
            lst = newnode(n);
            tmp = add_node(&tmp, lst);
            while ((*str >= '0' && *str <= '9') || (*str == '-') || (*str == '+'))
                str++;
            while (*str == 32)
                str++;
        }
    return (tmp);

}
node *ft_fullstack(int ac, char **av)
{
    char *str;
    node *tmp;

    if (ac < 2)
    {
        write (1, "ERROR\n", 6);
        exit(0);
    }
    else
    {
        str = ft_strjoin(ac, av);
        tmp = creat_stack(str);
    }
    return (tmp);
}
