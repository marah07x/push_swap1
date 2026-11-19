/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:42:01 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/18 13:30:02 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_list *a)
{
	double	mistakes;
	double	total_pairs;
	t_list	*a_node;
	t_list	*a_next;

	mistakes = 0;
	total_pairs = 0;
	a_node = a;
	while (a_node)
	{
		a_next = a_node->next;
		while (a_next)
		{
			total_pairs += 1;
			if (*(int *)a_node->content > *(int *)a_next->content)
				mistakes += 1;
			a_next = a_next->next;
		}
		a_node = a_node->next;
	}
	if (total_pairs == 0)
		return (0);
	return (mistakes / total_pairs);
}
