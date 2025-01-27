/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 22:16:49 by fbenjama          #+#    #+#             */
/*   Updated: 2025/01/26 11:54:00 by fbenjama         ###   ########.fr       */
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
void swap_a(node *head);
void swap_b(node *head);
void swap_a_b(node *heada, node *headb);
void push_a(node **heada, node **headb);
void push_b(node **heada, node **headb);
void rotate_a(node **lsta);
void rotate_b(node **lstb);
void ra_rb(node **heada, node **headb);
void rra(node **lst);
void rrb(node **lst);
void rrr(node **lsta, node **lstb);
int count_array(char ** arv);
char *ft_strjoin(char **arv, int arc);
int ft_atoi(char *str);
node  *add_node(node **lst , node *newnode);
node *newnode(int n);
int check(int arr[]);
node *check_args(char **arv, int arc);
int check_signe(char *s);
int check_error(char *arv);

#endif