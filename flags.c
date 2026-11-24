/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 15:00:46 by balsaray          #+#    #+#             */
/*   Updated: 2026/11/23 15:02:54 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_flag(char *flag)
{
	if (ft_strncmp(flag, "--simple", (ft_strlen("--simple") + 1)) == 0)
		return (SIMPLE);
	else if (ft_strncmp(flag, "--medium", (ft_strlen("--medium") + 1)) == 0)
		return (MEDIUM);
	else if (ft_strncmp(flag, "--complex", (ft_strlen("--complex") + 1)) == 0)
		return (COMPLEX);
	else if (ft_strncmp(flag, "--adaptive", (ft_strlen("--adaptive") + 1)) == 0)
		return (ADAPTIVE);
	else if (ft_strncmp(flag, "--bench", (ft_strlen("--bench") + 1)) == 0)
		return (BENCH);
	else
		return (-1);
}
int	save_flag(int flag, int *strategy, int *bench)
{
	if (flag == BENCH)
	{
		if (*bench != 0)
			return (-1);
		*bench = 1;
	}
	else
	{
		if (*strategy != 0)
			return (-1);
		*strategy = flag;
	}
	return (0);
}
int	read_flag(int argc, char **argv, int *strategy, int *bench)
{
	int	i;
	int	flag;

	i = 1;
	while (i < argc && (argv[i][0] == '-' && argv[i][1] == '-'))
	{
		flag = get_flag(argv[i]);
		if (flag == -1)
			return (-1);
		if (save_flag(flag, strategy, bench) == -1)
			return (-1);
		i++;
	}
	if (*strategy == 0)
		*strategy = ADAPTIVE;
	return (i);
}

void	select_strategy(int strategy, t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2)
		sort_2nodes(a);
	else if (ft_lstsize(*a) == 3)
		sort_3nodes(a);
	else if (ft_lstsize(*a) <= 5)
		selction_sort(a, b);
	else if (strategy == SIMPLE)
		selction_sort(a, b);
	else if (strategy == MEDIUM)
		chunk_based(a, b);
	else if (strategy == COMPLEX)
		chunk_based(a, b);
	else if (strategy == ADAPTIVE)
		chunk_based(a, b);
}
