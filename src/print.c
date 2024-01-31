/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 01:18:15 by ggalon            #+#    #+#             */
/*   Updated: 2024/01/31 01:18:15 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putchar(char c, int *l)
{
	int	temp;

	temp = write(1, &c, 1);
	*l += temp;
	if (temp == -1)
		return (1);
	return (0);
}

int	ft_putstr(char *s, int *l)
{
	int	temp;

	if (!s)
	{
		temp = write(1, "(null)", 6);
		*l += temp;
		if (temp == -1)
			return (1);
	}
	else
	{
		temp = write(1, s, ft_strlen(s));
		*l += temp;
		if (temp == -1)
			return (1);
	}
	return (0);
}

int	ft_putnbr(long nbr, int base, int uppercase, int *l)
{
	char	*table;

	table = "0123456789abcdef0123456789ABCDEF";
	if (nbr == -2147483648)
	{
		if (ft_putstr("-2147483648", l))
			return (1);
		return (0);
	}
	if (nbr < 0)
	{
		if (ft_putchar('-', l))
			return (1);
		nbr *= -1;
	}
	if (nbr >= base)
	{
		if (ft_putnbr(nbr / base, base, uppercase, l))
			return (1);
	}
	if (ft_putchar(table[nbr % base + uppercase], l))
		return (1);
	return (0);
}

int	ft_putptr_rec(size_t p, int *l, char *base)
{
	if (p >= 16)
		if (ft_putptr_rec(p / 16, l, base))
			return (1);
	if (ft_putchar(base[p % 16], l))
		return (1);
	return (0);
}

int	ft_putptr(void *p, int *l)
{
	char	*base;

	base = "0123456789abcdef";
	if (p == NULL)
	{
		if (ft_putstr("(nil)", l))
			return (1);
		return (0);
	}
	else
	{
		if (ft_putstr("0x", l))
			return (1);
		if (ft_putptr_rec((size_t)p, l, base))
			return (1);
	}
	return (0);
}
