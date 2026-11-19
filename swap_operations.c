/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 20:12:04 by balsaray          #+#    #+#             */
/*   Updated: 2026/11/17 14:15:07 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *head)
{
	t_list	*one;
	t_list	*two;
	void	*temp;

	if (!head || !head->next)
		return ;
	one = head;
	two = one->next;
	temp = one->content;
	one->content = two->content;
	two->content = temp;
}

void	sa(t_list *a)
{
	swap(a);
	ft_printf("sa\n");
	operations_count()[0]++;
}

void	sb(t_list *b)
{
	swap(b);
	ft_printf("sb\n");
	operations_count()[1]++;
}

void	ss(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
	operations_count()[2]++;
}
