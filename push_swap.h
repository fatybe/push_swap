/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:16:49 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/30 20:57:29 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
typedef struct node {
    int data;
    struct node* next;
}node;


node *stacka(void);
node *stackb(void);
void    swap_a(node **head);
void swap_a_b(node *heada, node *headb);
void push_a(node **heada, node **headb);
void push_b(node **heada, node **headb);
void    rotate_a(node **lsta);
void    rotate_b(node **lstb);
void ra_rb(node **heada, node **headb);
void rra(node **lst);
void rrb(node **lst);
void rrr(node **lsta, node **lstb);

int count_array(char ** arv);
char *ft_strjoin(char **arv, int arc);
int ft_atoi(char *str);
node  *add_node(node **lst , node *newnode);
node *newnode(int n);
int is_repeat(int arr[]);
node *check_argv(char **arv, int arc);
int check_signe(char *s);
int check_error(char *arv);
int count_lst(node *lst);
void    pusha_tob(node **a, node **b);
int is_sorted(node **a);
void sort_three(node **a);
int find_max(node **a);
void ft_swap(int a, int b);
void    sort_turk(node **a, node **b);

#endif