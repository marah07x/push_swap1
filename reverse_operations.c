/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 21:13:31 by balsaray          #+#    #+#             */
/*   Updated: 2026/11/17 14:16:00 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse(t_list **head)
{
	t_list	*lst;

	if (!head || !*head || !(*head)->next)
		return ;
	lst = lst_pop_last(head);
	ft_lstadd_front(head, lst);
}

void	rra(t_list **a)
{
	reverse(a);
	ft_printf("rra\n");
	operations_count()[8]++;
}

void	rrb(t_list **b)
{
	reverse(b);
	ft_printf("rrb\n");
	operations_count()[9]++;
}

void	rrr(t_list **a, t_list **b)
{
	reverse(a);
	reverse(b);
	ft_printf("rrr\n");
	operations_count()[10]++;
}
