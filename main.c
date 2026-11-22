/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 14:43:43 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/22 14:32:04 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_list *a, t_list *b)
{
	t_list	*tmp;

	tmp = a;
	ft_printf("a: ");
	while (tmp)
	{
		ft_printf("%d ", *(int *) tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\nb: ");
	tmp = b;
	while (tmp)
	{
		ft_printf("%d ", *(int *) tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\n");
}
#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (!parser(argc, argv, &a))
	{
		stack_free(&a);
		write(2, "Error\n", 6);
		return (1);
	}
	if (!is_sorted(a))
	{
		rank_list(a);
		chunk_based(&a, &b);
	}
	stack_free(&a);
	stack_free(&b);
}
