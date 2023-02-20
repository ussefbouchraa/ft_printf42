/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 00:15:17 by ybouchra          #+#    #+#             */
/*   Updated: 2022/12/12 02:17:36 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_arg(const char *format, va_list last_arg, int *len)
{	
	if (*format == 'c')
		ft_putchar(va_arg(last_arg, int), len);
	else if (*format == 'd' || *(format) == 'i')
		ft_putnbr(va_arg(last_arg, int), len);
	else if (*format == 's')
		ft_putstr(va_arg(last_arg, char *), len);
	else if (*format == 'x')
		ft_puthex(va_arg(last_arg, unsigned int), 'x', len);
	else if (*format == 'X')
		ft_puthex(va_arg(last_arg, unsigned int), 'X', len);
	else if (*format == 'p')
		ft_putptr(va_arg(last_arg, unsigned long), len);
	else if (*format == 'u')
		ft_putunsigned(va_arg(last_arg, unsigned int), len);
	else
		ft_putchar(*format, len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	last_arg;

	va_start(last_arg, format);
	len = 0;
	while (*format)
	{	
		if (*format == '%' && *(format + 1) != '\0')
			ft_arg(++format, last_arg, &len);
		else
			ft_putchar(*format, &len);
		format++;
	}
	va_end(last_arg);
	return (len);
}
