/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marsaleh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:55:29 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/23 09:04:52 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*operations_count(void)
{
	static int	operations[11];

	return (operations);
}

int	count_total(int *(*operations)(void))
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (i < 11)
	{
		total += operations()[i];
		i++;
	}
	return (total);
}

void	print_op_count(char *operation, int count)
{
	ft_putstr_fd(operation, 2);
	ft_putstr_fd(": ", 2);
	ft_putnbr_fd(count, 2);
	ft_putstr_fd(" ", 2);
	ft_putnbr_fd(count_total(operations_count), 2);
}
