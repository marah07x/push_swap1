/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marsaleh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:34:41 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/18 11:21:50 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_input_seg(char **s)
{
	int	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
}

static int	parse_full(char *s, t_list **a)
{
	int		num;
	int		*ptr;
	t_list	*node;

	if (!is_num(s) || !to_num(s, &num))
		return (0);
	if (is_duplicate(*a, num))
		return (0);
	ptr = malloc(sizeof(int));
	if (!ptr)
		return (0);
	*ptr = num;
	node = ft_lstnew(ptr);
	if (!node)
	{
		free(ptr);
		return (0);
	}
	ft_lstadd_back(a, node);
	return (1);
}

static int	check_index(char **s, t_list **a, int i)
{
	if (!parse_full(s[i], a))
	{
		free_input_seg(s);
		return (0);
	}
	return (1);
}

int	parser(int argc, char **argv, t_list **a)
{
	char	**s;
	int		index1;
	int		index2;

	index1 = 1;
	while (index1 < argc)
	{
		s = ft_split(argv[index1++], ' ');
		if (!s || !s[0])
		{
			if (s)
				free_input_seg(s);
			return (0);
		}
		index2 = 0;
		while (s[index2])
		{
			if (!check_index(s, a, index2++))
				return (0);
		}
		free_input_seg(s);
	}
	return (1);
}

void	stack_free(t_list **lst)
{
	t_list	*next;

	if (!lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		free((*lst)->content);
		free(*lst);
		*lst = next;
	}
}
