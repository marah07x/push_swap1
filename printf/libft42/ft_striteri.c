/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 16:35:16 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/15 21:41:17 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(unsigned int i, char *c)
{
size_t	i;
	int				i;


if (*c >= 'a' && *c <= 'z')
*c -= 32;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if ((!s || !f))
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		++i;
	}
}
/*
int	main(void)
{
char	l[] = "marah";

ft_striteri(l, f);
printf("%s", l);
return (0);
}
*/
