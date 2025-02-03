/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:59:59 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/03 10:38:50 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct node {
    int data;
    struct node* next;
    int target;
    int cost;
}node;

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


node *ft_fullstack(int ac, char **av);
int count_array(char ** arv);
char *ft_strjoin(int ac, char **av);
int ft_atoi(char *str);
int is_digite(char c);
void    ft_error(void);
node *creat_stack(char *str);
void    ft_checkdigit(char *str);
node  *add_node(node **lst , node *newnode);
node *newnode(int n);
void	ft_checksigne(char *str);
int is_duplicate(node *stack);
void    swap_a(node **head);
void    swap_a_b(node *heada, node *headb);
void    push_a(node **heada, node **headb);
void    push_b(node **heada, node **headb);
void    rotate_a(node **lsta);
void rotate_b(node **lstb);
void ra_rb(node **heada, node **headb);
void rra(node **lst);
void rrb(node **lst);
void rrr(node **lsta, node **lstb);
void    sort_turk(node **a);
void   push_ato_b(node **a, node **b);
int check_sort(node *lst);
void    sort_three(node **a);
int find_max(node **a);
#endif