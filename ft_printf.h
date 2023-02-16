/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:41:11 by saalamoo          #+#    #+#             */
/*   Updated: 2022/12/22 15:54:59 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	format_checker(va_list arg, char c);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_unsigned_putnbr(unsigned int n);
int	ft_puthex(unsigned long n);
int	print_hex_lower(unsigned int n);
int	print_hex_upper(unsigned int n);
int	ft_print_pointer(unsigned long n);

#endif
