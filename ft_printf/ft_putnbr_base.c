/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:27:21 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/29 11:32:51 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long n)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_putnbr_base(n / 16);
	len += ft_printhex(n % 16);
	return (len);
}
