/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:59:59 by fbenjama          #+#    #+#             */
/*   Updated: 2025/02/09 12:17:22 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct node {
    int data;
    struct node* next;
    struct node *target;
    int total_cost;
    int cost;
}node;

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


node *ft_fullstack(int ac, char **av);
int count_array(char ** arv);
char *ft_strjoin(int ac, char **av);
int ft_atoi(char *str);
int is_digite(char c);
void    free_stack(node **a);
void free_all(node **a, node **b);
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
int find_max(node *a);
int find_min(node *a);
int count_lst(node *a);
void ft_sort(node **a, node **b);
void find_target(node *a, node *b);
node    *find_node(node *b);
void    ft_pushb_to_a(node **a, node **b);
void    final_sort(node **a, node **b, node *cheapest);
node *min_node(node *a);
void    final_cost(node *b);
void    find_cost(node *lst);
int    Middle_Check(node *lst, node *node);
void final_step(node **a);
int ft_check(node *a);

#endif