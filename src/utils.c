/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 01:20:16 by ggalon            #+#    #+#             */
/*   Updated: 2024/01/31 01:20:16 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_percent(const char *s, int *l, va_list argptr)
{
	if (s[1] == 'c')
		ft_putchar(va_arg(argptr, int), l);
	else if (s[1] == 's')
		ft_putstr(va_arg(argptr, char *), l);
	else if (s[1] == 'p')
		ft_putptr(va_arg(argptr, void *), l);
	else if (s[1] == 'd' || s[1] == 'i')
		ft_putnbr(va_arg(argptr, int), 10, 0, l);
	else if (s[1] == 'u')
		ft_putnbr(va_arg(argptr, unsigned int), 10, 0, l);
	else if (s[1] == 'x')
		ft_putnbr(va_arg(argptr, unsigned int), 16, 0, l);
	else if (s[1] == 'X')
		ft_putnbr(va_arg(argptr, unsigned int), 16, 16, l);
	else if (s[1] == '%')
		ft_putchar('%', l);
	else
		*l += write(1, s, 2);
}
