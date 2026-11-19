/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:35:37 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/15 21:41:40 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *sentence, int ch, size_t n)

{
	unsigned char	*sentencel;

	sentencel = (unsigned char *)sentence;
	while (n != 0)
	{
		*sentencel = ch;
		sentencel++;
		n--;
	}
	return (sentence);
}
/*

int	main(void)
{
size_t	n;
char	*b;
char	h[] = "marah";
char	s;

s = 'j';
n = 3;
b = ft_memset(n, h, s);
printf("%s", b);
}
*/
