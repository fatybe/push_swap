/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 18:37:52 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/01 18:51:27 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_duplicate(node *stack)
{
    node *tmp;
    node *lst;
    
    lst = stack;
    while(lst != NULL && lst->next != NULL)
    {
        tmp = lst->next;
        while (tmp != NULL && tmp->next != NULL)
        {
            if (lst->data == tmp->data)
                return (1);
            tmp = tmp->next;
        }
        lst = lst->next;
    }
    return (0);
}
