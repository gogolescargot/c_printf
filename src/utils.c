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

int	ft_unknow_percent(const char *str, int *l)
{
	int	temp;

	temp = write(1, str, 2);
	*l += temp;
	if (temp == -1)
		return (1);
	return (0);
}

int	ft_percent(const char *str, int *l, va_list argptr)
{
	if (str[1] == 'c')
		return (ft_putchar(va_arg(argptr, int), l));
	else if (str[1] == 's')
		return (ft_putstr(va_arg(argptr, char *), l));
	else if (str[1] == 'p')
		return (ft_putptr(va_arg(argptr, void *), l));
	else if (str[1] == 'd' || str[1] == 'i')
		return (ft_putnbr(va_arg(argptr, int), 10, 0, l));
	else if (str[1] == 'u')
		return (ft_putnbr(va_arg(argptr, unsigned int), 10, 0, l));
	else if (str[1] == 'x')
		return (ft_putnbr(va_arg(argptr, unsigned int), 16, 0, l));
	else if (str[1] == 'X')
		return (ft_putnbr(va_arg(argptr, unsigned int), 16, 16, l));
	else if (str[1] == '%')
		return (ft_putchar('%', l));
	else
		return (ft_unknow_percent(str, l));
}
