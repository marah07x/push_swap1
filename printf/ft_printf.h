/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsaleh <marsaleh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:16:15 by marsaleh          #+#    #+#             */
/*   Updated: 2026/11/14 13:46:41 by marsaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft42/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr_base(unsigned long long n, char *base);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr_dec(int n);
int	ft_putptr(void *ptr);
int	ft_putundef(char c);

#endif
