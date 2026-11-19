/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:55:29 by balsaray          #+#    #+#             */
/*   Updated: 2026/11/17 14:37:11 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*operations_count(void)
{
	static int	operations[11];

	return (operations);
}

void	print_op_count(char *operation, int count)
{
	ft_putstr_fd(operation, 2);
	ft_putstr_fd(": ", 2);
	ft_putnbr_fd(count, 2);
	ft_putstr_fd(" ", 2);
}
