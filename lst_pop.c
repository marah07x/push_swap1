/* ************************************************************************** */
/*                                                                            */
<<<<<<< Updated upstream
/*                                                        :::      ::::::::   */
/*   lst_pop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 11:24:26 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/22 14:23:21 by balsaray         ###   ########.fr       */
=======
/*                                                       :::      ::::::::    */
/*   lst_pop.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/14 11:24:26 by marsaleh         #+#    #+#              */
/*   Updated: 2026/11/19 13:45:31 by marsaleh        ###   ########.fr        */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank_list(t_list *a)
{
	t_list	*current;
	t_list	*next;
	int		rank;

	current = a;
	while (current)
	{
		rank = 0;
		next = a;
		while (next)
		{
			if (*(int *)next->content < *(int *)current->content)
				rank++;
			next = next->next;
		}
		current->index = rank;
		current = current->next;
	}
}

t_list	*lst_pop(t_list **lst)
{
	t_list	*top;

	if (!lst || !*lst)
		return (NULL);
	top = *lst;
	*lst = top->next;
	if (*lst)
		(*lst)->prev = NULL;
	top->next = NULL;
	top->prev = NULL;
	return (top);
}

t_list	*lst_pop_last(t_list **lst)
{
	t_list	*last;

	if (!lst || !*lst)
		return (NULL);
	last = ft_lstlast(*lst);
	if (last->prev)
		last->prev->next = NULL;
	else
		*lst = NULL;
	last->prev = NULL;
	return (last);
}
