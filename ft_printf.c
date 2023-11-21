/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:55:06 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/21 06:26:14 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	size_t	cprint;
	size_t	i;
	va_list	argptr;

	va_start(argptr, s);
	i = -1;
	cprint = 0;
	if (!s)
		return (va_end(argptr), -1);
	while (++i < ft_strlen(s))
	{
		if (s[i] == '%' && ++i)
		{
			if (!s[i])
				return (va_end(argptr), -1);
			cprint += ft_percent(s, i, argptr);
		}
		else
			cprint += ft_putchar(s[i]);
	}
	return (va_end(argptr), cprint);
}
