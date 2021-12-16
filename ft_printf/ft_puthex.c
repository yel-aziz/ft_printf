/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:16:32 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/29 11:48:16 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(unsigned long n)
{
	int	len;

	len = 0;
	len += ft_putnbr_base(n);
	return (len);
}
