/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saalamoo <saalamoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 13:29:14 by saalamoo          #+#    #+#             */
/*   Updated: 2022/12/22 15:54:48 by saalamoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putstr("-2147483648");
		return (i);
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		i += ft_putnbr(n / 10);
	i += ft_putchar(n % 10 + '0');
	return (i);
}

int	ft_unsigned_putnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_unsigned_putnbr(n / 10);
	i += ft_putchar(n % 10 + '0');
	return (i);
}
