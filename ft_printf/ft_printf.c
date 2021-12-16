/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:43:04 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/29 16:35:01 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	affi(char fmt, int *len, va_list ap)
{
	if (fmt == 'c')
		*len -= ft_putchar(va_arg(ap, int));
	else if (fmt == 's')
		*len += ft_putstr(va_arg(ap, char *)) - 2;
	else if (fmt == 'x' || fmt == 'X')
		if (fmt == 'X')
			*len += ft_puthexup(va_arg(ap, unsigned int)) - 2;
	else
			*len += ft_puthex(va_arg(ap, unsigned int)) - 2;
	else if (fmt == 'd' || fmt == 'i')
		*len += ft_putnbr(va_arg(ap, int)) - 2;
	else if (fmt == '%')
		*len -= ft_putchar('%');
	else if (fmt == 'p')
	{
		*len += ft_putstr("0x");
		*len += ft_puthex(va_arg(ap, unsigned long)) - 2;
	}
	else if (fmt == 'u')
		*len += ft_putnbrunsi(va_arg(ap, unsigned int)) - 2;
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, fmt);
	len = 0;
	while (fmt[len])
		len++;
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			fmt++;
			affi(*fmt, &len, ap);
			fmt++;
		}
		if (*fmt != '\0' && *fmt != '%')
			ft_putchar(*fmt++);
	}
	va_end(ap);
	return (len);
}
