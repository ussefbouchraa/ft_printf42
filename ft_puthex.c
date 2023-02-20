/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:51:43 by ybouchra          #+#    #+#             */
/*   Updated: 2022/12/10 10:07:29 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long nb, char c, int *len)
{
	char	*all;

	if (c == 'X')
		all = "0123456789ABCDEF";
	else
		all = "0123456789abcdef";
	if (nb < 16)
		ft_putchar(all[nb], len);
	else
	{
		ft_puthex(nb / 16, c, len);
		ft_puthex(nb % 16, c, len);
	}
}
