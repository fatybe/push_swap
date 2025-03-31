/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenjama <fbenjama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:59:59 by fbenjama          #+#    #+#             */
/*   Updated: 2025/03/27 14:29:23 by fbenjama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct node
{
	long		data;
	struct node	*next;
	struct node	*target;
	int			total_cost;
	int			cost;
}				t_node;

t_node			*ft_fullstack(int ac, char **av);
int				count_array(char **arv);
char			*ft_strjoin(int ac, char **av);
long			ft_atoi(char *str);
int				is_digite(char c);
void			free_stack(t_node **a);
void			ft_error(void);
t_node			*creat_stack(char *str);
t_node			*add_node(t_node **lst, t_node *newnode);
t_node			*newnode(long n);
int				is_duplicate(t_node *stack);
int				handle_max_min(long n);
int				is_empty(char *str);
int				validate_input(char *str);
int				ft_isspace(char c);
int				ft_isspace(char c);
// operation
void			swap_a(t_node **head);
void			swap_a_b(t_node *heada, t_node *headb);
void			push_a(t_node **heada, t_node **headb);
void			push_b(t_node **heada, t_node **headb);
void			rotate_a(t_node **lsta);
void			rotate_b(t_node **lstb);
void			ra_rb(t_node **heada, t_node **headb);
void			rra(t_node **lst);
void			rrb(t_node **lst);
void			rrr(t_node **lsta, t_node **lstb);
void			reverse_rotateb(t_node **b);
void			reverse_rotatea(t_node **a);
void			ra(t_node **a);
void			rb(t_node **b);

// sorting
void			sort_turk(t_node **a);
void			push_ato_b(t_node **a, t_node **b);
int				check_sort(t_node *lst);
void			sort_three(t_node **a);

int				find_max(t_node *a);
int				find_min(t_node *a);
int				count_lst(t_node *a);
void			find_target(t_node *a, t_node *b);
t_node			*find_node(t_node *b);
t_node			*min_node(t_node *a);

void			ft_sort(t_node **a, t_node **b);
void			final_sort(t_node **a, t_node **b, t_node *cheapest);
void			final_cost(t_node *b, t_node *a);
void			find_cost(t_node *lst);
int				middle_check(t_node *lst, t_node *node);
void			final_step(t_node **a);
#endif