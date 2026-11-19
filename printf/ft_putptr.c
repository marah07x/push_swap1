/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:51:46 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/17 13:07:01 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	i += ft_putstr("0x");
	i += ft_putnbr_base((unsigned long long)ptr, "0123456789abcdef");
	return (i);
}
// int	main(void)
// {
// 	char	s[] = "batool";
// 	int		i;

// 	i = ft_putptr(s);
// 	printf("\n%d", i);
// 	printf("\n%p", s);
// }
