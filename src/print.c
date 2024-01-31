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

void	ft_putchar(char c, int *l)
{
	*l += write(1, &c, 1);
}

void	ft_putstr(char *s, int *l)
{
	if (!s)
		*l += write(1, "(null)", 6);
	else
		*l += write(1, s, ft_strlen(s));
}

void	ft_putnbr(long nbr, int base, int uppercase, int *l)
{
	char	*table;

	table = "0123456789abcdef0123456789ABCDEF";
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", l);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-', l);
		nbr *= -1;
	}
	if (nbr >= base)
		ft_putnbr(nbr / base, base, uppercase, l);
	ft_putchar(table[nbr % base + uppercase], l);
}

void	ft_putptr_rec(size_t p, int *l, char *base)
{
	if (p >= 16)
		ft_putptr_rec(p / 16, l, base);
	ft_putchar(base[p % 16], l);
}

void	ft_putptr(void *p, int *l)
{
	char	*base;

	base = "0123456789abcdef";
	if (p == NULL)
	{
		ft_putstr("(nil)", l);
		return ;
	}
	else
	{
		ft_putstr("0x", l);
		ft_putptr_rec((size_t)p, l, base);
	}
}
