/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-aziz <yel-aziz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:35:55 by yel-aziz          #+#    #+#             */
/*   Updated: 2021/11/29 11:47:58 by yel-aziz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printhex( unsigned long n);
int	ft_putnbr_base(unsigned long n);
int	ft_putnbr(int n);
int	ft_puthex(unsigned long n);
int	ft_putstr(char *s);
int	ft_putnbrunsi(unsigned int n);
int	ft_printf(const char *fmt, ...);
int	ft_puthexup(unsigned long n);
#endif
