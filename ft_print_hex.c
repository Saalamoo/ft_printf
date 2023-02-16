/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:28:36 by saalamoo          #+#    #+#             */
/*   Updated: 2022/12/21 16:05:10 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_lower(unsigned int n)
{
	unsigned int	i;
	const char		hex_digits[] = "0123456789abcdef";

	i = 0;
	if (n >= 16)
		i += print_hex_lower(n / 16);
	i += ft_putchar(hex_digits[n % 16]);
	return (i);
}

int	print_hex_upper(unsigned int n)
{
	unsigned int	i;
	const char		hex_digits[] = "0123456789ABCDEF";

	i = 0;
	if (n >= 16)
		i += print_hex_upper(n / 16);
	i += ft_putchar(hex_digits[n % 16]);
	return (i);
}

int	ft_print_pointer(unsigned long n)
{
	int		len;
	char	*s;

	s = "0123456789abcdef";
	len = 0;
	if (n > 15)
		len += ft_print_pointer(n / 16);
	len += ft_putchar(s[n % 16]);
	return (len);
}

int	ft_puthex(unsigned long n)
{
	int	len;

	len = ft_putstr("0x");
	if (n == 0)
		len += ft_putchar('0');
	else
		len += ft_print_pointer(n);
	return (len);
}
