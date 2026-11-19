/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 13:00:28 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/16 10:40:55 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_num(char *input)
{
	int	i;

	i = 0;
	if (input[i] == '-' || input[i] == '+')
		i++;
	if (!input[i])
		return (0);
	while (input[i])
	{
		if (!ft_isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_duplicate(t_list *a, int value)
{
	while (a)
	{
		if (*(int *)a->content == value)
			return (1);
		a = a->next;
	}
	return (0);
}

int	to_num(char *s, int *res)
{
	long	n;
	int		sign;
	int		i;

	n = 0;
	sign = 1;
	i = 0;
	if (*s == '+' || *s == '-')
	{
		if (s[i] == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		n = n * 10 + (*s - '0');
		if (n * sign > INT_MAX || n * sign < INT_MIN)
			return (0);
		s++;
	}
	*res = (int)(n * sign);
	return (1);
}
