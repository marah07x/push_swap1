/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putundef.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balsaray <balsaray@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:00:04 by balsaray          #+#    #+#             */
/*   Updated: 2026/10/18 15:01:26 by balsaray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putundef(char c)
{
	int	count;

	count = 0;
	count += ft_putchar('%');
	count += ft_putchar(c);
	return (count);
}
