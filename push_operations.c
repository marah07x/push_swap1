/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 20:56:29 by balsaray          #+#    #+#             */
/*   Updated: 2026/11/17 14:14:40 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **src, t_list **dst)
{
	t_list	*lst;

	if (!src || !*src)
		return ;
	lst = lst_pop(src);
	ft_lstadd_front(dst, lst);
}

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	ft_printf("pa\n");
	operations_count()[3]++;
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	ft_printf("pb\n");
	operations_count()[4]++;
}
