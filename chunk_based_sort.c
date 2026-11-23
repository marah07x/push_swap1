/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_based_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:17:39 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/23 10:54:11 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	sqr(int n)
{
	int	sqr;

	sqr = 0;
	while (sqr * sqr <= n)
		sqr++;
	return (sqr - 1);
}

static void	sort_back_to_a(t_list **a, t_list **b)
{
	int		size;
	t_list	*current;
	int		position;

	while (*b)
	{
		size = ft_lstsize(*b);
		position = 0;
		current = *b;
		while (current->index != size - 1)
		{
			current = current->next;
			position++;
		}
		if (position <= size / 2)
		{
			while (position-- > 0)
				rb(b);
		}
		else
		{
			while (position++ < size)
				rrb(b);
		}
		pa(a, b);
	}
}

void	chunk_based(t_list **a, t_list **b)
{
	int	index;
	int	chunk_size;
	int	size;

	index = 0;
	size = ft_lstsize(*a);
	chunk_size = sqr(size);
	while (index < size)
	{
		if ((*a)->index < index)
		{
			pb(a, b);
			rb(b);
			index++;
		}
		else if ((*a)->index <= index + chunk_size)
		{
			pb(a, b);
			index++;
		}
		else
			ra(a);
	}
	sort_back_to_a(a, b);
}
