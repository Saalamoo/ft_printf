/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:27:59 by saalamoo          #+#    #+#             */
/*   Updated: 2023/01/02 12:27:28 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_checker(va_list arg, char c)
{
	int	i;

	i = 0;
	if (c == 'c')
	i += ft_putchar(va_arg(arg, int));
	else if (c == 's')
	i += ft_putstr(va_arg(arg, char *));
	else if (c == 'p')
	i += ft_puthex(va_arg(arg, unsigned long));
	else if (c == 'd' || c == 'i')
	i += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
	i += ft_unsigned_putnbr(va_arg(arg, unsigned int));
	else if (c == 'x')
	i += print_hex_lower(va_arg(arg, unsigned int));
	else if (c == 'X')
	i += print_hex_upper(va_arg(arg, unsigned int));
	else if (c == '%')
	i += ft_putchar('%');
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += format_checker(arg, format[i]);
			i++;
		}
		else
		{
			len += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(arg);
	return (len);
}


int main()
{
	char c = 'c';
	char s[] = "hello";
	int d = 10;
	int x = 10;
	char *p = &c;
	printf("%c\n %d\n %s\n %x\n %s\n %p\n", c, d, s, x, s, p);
	ft_printf("%c\n %d\n %s\n %x\n %s\n %p\n", c, d, s, x, s, p);
}
