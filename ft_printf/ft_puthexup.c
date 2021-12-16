/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:56:50 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/29 11:31:30 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexup(unsigned long n)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_puthexup(n / 16);
	len += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (len);
}
