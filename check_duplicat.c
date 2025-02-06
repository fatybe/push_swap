/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:37:52 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/03 11:29:04 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_duplicate(node *stack)
{
    node *tmp;
    node *lst;
    
    lst = stack;
    while(lst != NULL)
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
