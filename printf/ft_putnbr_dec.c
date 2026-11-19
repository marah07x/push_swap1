/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_dec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:42:05 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/17 13:07:07 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_dec(int n)
{
	long	temp;

	temp = n;
	if (temp < 0)
	{
		write(1, "-", 1);
		temp = -temp;
		return (ft_putnbr_base(temp, "0123456789") + 1);
	}
	return (ft_putnbr_base(temp, "0123456789"));
}
// int	main(void)
// {
// 	int	i;

// 	i = ft_putnbr_dec(42);
// 	printf("\n%d", i);
// }
