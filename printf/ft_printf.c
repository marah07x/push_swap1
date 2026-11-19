/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:39:02 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/20 10:17:50 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(char c, va_list *list)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(*list, int));
	else if (c == 's')
		count += ft_putstr(va_arg(*list, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(*list, void *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr_dec(va_arg(*list, int));
	else if (c == 'u')
		count += ft_putnbr_base(va_arg(*list, unsigned int), "0123456789");
	else if (c == 'x')
		count += ft_putnbr_base(va_arg(*list, unsigned int),
				"0123456789abcdef");
	else if (c == 'X')
		count += ft_putnbr_base(va_arg(*list, unsigned int),
				"0123456789ABCDEF");
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_putundef(c);
	return (count);
}

static int	format_check(const char *format, va_list *list)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (i == (int)ft_strlen(format))
				return (-1);
			count += check_type(format[i++], list);
		}
		else
			count += ft_putchar(format[i++]);
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		count;

	if (!format)
		return (-1);
	va_start(list, format);
	count = format_check(format, &list);
	va_end(list);
	return (count);
}
// int main()
// {
// 	int i = ft_printf("hello %k world");
// 	printf("\nstd: ");
// 	int r = printf("hello %k world");
// 	printf("\n%d\nstd: %d", i, r);
// }
