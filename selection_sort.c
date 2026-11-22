/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:36:47 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/22 14:57:23 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *a)
{
	while (a && a->next)
	{
		if (*(int *) a->content > *(int *) a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_2nodes(t_list **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	if (*(int *)(*a)->content > *(int *)(*a)->next->content)
		sa(*a);
}

void	sort_3nodes(t_list **a)
{
	int	node_one;
	int	node_two;
	int	node_three;

	node_one = *(int *)(*a)->content;
	node_two = *(int *)(*a)->next->content;
	node_three = *(int *)(*a)->next->next->content;
	if (node_one > node_two && node_one > node_three)
		ra(a);
	else if (node_two > node_one && node_two > node_three)
		rra(a);
	sort_2nodes(a);
}

t_list	*find_min(t_list *a, int *min_index, int *size)
{
	t_list	*current;
	t_list	*min_node;
	int		index;

	min_node = a;
	current = a->next;
	index = 1;
	*min_index = 0;
	while (current)
	{
		if (*(int *)(current->content) < *(int *)(min_node->content))
		{
			min_node = current;
			*min_index = index;
		}
		current = current->next;
		index++;
	}
	*size = index;
	return (min_node);
}

t_list	*selction_sort(t_list **a, t_list **b)
{
	t_list	*min_node;
	int		min_index;
	int		size;

	if (!a || !*a || !(*a)->next)
		return (NULL);
	if (ft_lstsize(*a) == 2)
		sort_2nodes(a);
	else if (ft_lstsize(*a) == 3)
		sort_3nodes(a);
	while ((*a)->next && !is_sorted(*a))
	{
		min_node = find_min(*a, &min_index, &size);
		while (*a != min_node)
		{
			if (min_index <= size / 2)
				ra(a);
			else
				rra(a);
		}
		pb(a, b);
	}
	while (*b)
		pa(a, b);
	return (*a);
}
