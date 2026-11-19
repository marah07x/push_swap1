/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: marsaleh <marsaleh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/28 13:42:07 by marsaleh         #+#    #+#              */
/*   Updated: 2026/11/16 14:50:22 by marsaleh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!(list))
		return (NULL);
	list->content = content;
	list->index = 0;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}
/*

int	main(void)
{
char	*str;
t_list	*node = ft_lstnew(str);

str = "marah";
if (!node)
return (0);
free(node);
printf("%s\n", (char *) node->content);
printf("%p", (void *) node->next);
}
*/
