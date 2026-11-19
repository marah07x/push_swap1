/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 07:33:12 by marsaleh         #+#    #+#              */
/*   Updated: 2026/11/14 10:27:05 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	last = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
}

/*
int	main(void)
{
t_list	*head;
t_list	*meow;
t_list	*node1;
t_list	*node2;

head = NULL;
node1 = ft_lstnew(strdup("marah"));
node2 = ft_lstnew(strdup("joy"));
if (!node1 || !node2)
return(1);
ft_lstadd_back(&head,node2);
ft_lstadd_back(&head ,node1);
meow = head;
while (meow)
{
printf("%s ", (char*)meow -> content);
meow = meow ->next;
}
free(node1);
free(node2);
}
*/
