
#include "push_swap.h"

int count_lst(node *lst)
{
	int i;
	i = 0;
	while(lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
void ft_swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int find_max(node **a)
{
	int max;
	node *lst;

	lst = *a;
	max = lst->data;
	while (lst != NULL && lst->next != NULL)
	{
		if (max < lst->next->data)
			max = lst->next->data;
		lst = lst->next;
	}
	return (max);
}
int is_sorted(node **a)
{
	node *tmp;

	tmp = *a;
	while (tmp != NULL && tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

void    sort_three(node **a)
{
	int max;
	node *tmp;

	max = find_max(a);
	tmp = *a;
	if (max == tmp->data)
		rotate_a(a);
	else if (max == tmp->next->data)
		rra(a);
	if (is_sorted(a) == 1)
		swap_a(a);
}
