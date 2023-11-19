/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:55:06 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/19 01:57:47 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	size_t	len;
	size_t	cprint;
	size_t	i;
	va_list	argptr;

	va_start(argptr, s);
	len = ft_strlen(s);
	i = -1;
	cprint = 0;
	while (++i < len)
	{
		if (s[i] == '%')
		{
			i++;
			while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
				i++;
			cprint += ft_percent(s, i, argptr);
		}
		else
			cprint += ft_putchar(s[i]);
	}
	va_end(argptr);
	return (cprint);
}
