/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:37:32 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/15 21:41:33 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *sentence, size_t n)

{
	unsigned char	*sentencel;

	sentencel = (unsigned char *)sentence;
	while (n != 0)
	{
		*sentencel = '\0';
		sentencel++;
		n--;
	}
}
/*

int	main(void)
{
size_t	n;
char	h[] = "marah is a student at yu";
int		i;
int		count;

count = 0;
i = strlen(h);
n = 3;
ft_bzero(h, n);
while (count < 3)
{
printf("%d", h[count]);
count++;
}
//printf("%d\n", h);
//bzero(h, n);
//printf("%d\n", h);
}
*/
