/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:10:02 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/29 11:48:25 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	n1;
	int		len;

	len = 0;
	n1 = n;
	if (n1 < 0)
	{
		len += ft_putchar('-');
		n1 *= -1;
	}
	if (n1 >= 0 && n1 <= 9)
	{
		len += ft_putchar(n1 + 48);
	}
	if (n1 >= 10)
	{
		len += ft_putnbr(n1 / 10);
		len += ft_putchar(n1 % 10 + 48);
	}
	return (len);
}
