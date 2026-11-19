/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:54:25 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/19 15:36:02 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long n, char *base)
{
	char			res;
	unsigned long	base_size;
	unsigned long	i;
	int				count;

	count = 0;
	base_size = ft_strlen(base);
	if (n >= base_size)
	{
		count = ft_putnbr_base(n / base_size, base);
	}
	i = (n % base_size);
	res = base[i];
	write(1, &res, 1);
	count++;
	return (count);
}
// int main()
// {
// 	int i = ft_putnbr_base(4294967295, "0123456789");
// 	printf("\n%d", i);
// }
