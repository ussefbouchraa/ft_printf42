/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:13:57 by ybouchra          #+#    #+#             */
/*   Updated: 2022/12/10 10:07:08 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(unsigned	long nbr, int	*len)
{
	ft_putstr("0x", len);
	ft_puthex(nbr, 'x', len);
}
