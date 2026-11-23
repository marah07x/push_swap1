/* ************************************************************************** */
/*                                                                            */
<<<<<<< Updated upstream
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 14:43:43 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/22 21:02:20 by balsaray         ###   ########.fr       */
=======
/*                                                       :::      ::::::::    */
/*   main.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/14 14:43:43 by marsaleh         #+#    #+#              */
/*   Updated: 2026/11/19 13:48:44 by marsaleh        ###   ########.fr        */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_val(int argc, char **argv, t_list **a, int *strategy)
{
	int	bench;
	int	start;

	bench = 0;
	start = read_flag(argc, argv, strategy, &bench);
	if (start == -1)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	if (start == argc)
		return (0);
	if (!parser(argc, argv, a, start))
	{
		stack_free(a);
		write(2, "Error\n", 6);
		return (-1);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		strategy;
	int		valid;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	strategy = 0;
	valid = input_val(argc, argv, &a, &strategy);
	if (valid == -1)
		return (1);
	if (valid == 0)
		return (0);
	if (!is_sorted(a))
	{
		rank_list(a);
		select_strategy(strategy, &a, &b);
	}
	stack_free(&a);
	stack_free(&b);
	return (0);
}
