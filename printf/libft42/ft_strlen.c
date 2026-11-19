/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:32:51 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/15 21:41:47 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *word)

{
	size_t	i;

	i = 0;
	while (word[i])
		i++;
	return (i);
}
/*
int	main(void)
{
char	word[] = "marah";

printf("%zu", ft_strlen(word));
}
*/
