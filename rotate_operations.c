/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 21:06:17 by balsaray          #+#    #+#             */
/*   Updated: 2026/11/17 14:15:32 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_list **head)
{
	t_list	*lst;

	if (!head || !*head || !(*head)->next)
		return ;
	lst = lst_pop(head);
	ft_lstadd_back(head, lst);
}

void	ra(t_list **a)
{
	rotate(a);
	ft_printf("ra\n");
	operations_count()[5]++;
}

void	rb(t_list **b)
{
	rotate(b);
	ft_printf("rb\n");
	operations_count()[6]++;
}

void	rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
	operations_count()[7]++;
}
