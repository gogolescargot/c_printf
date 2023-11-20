/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:24:02 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/19 01:44:50 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_percent(const char *s, size_t i, va_list argptr)
{
	size_t	temp;
	void	*ptemp;

	if (s[i] == 'c')
		return (ft_putchar(va_arg(argptr, int)));
	else if (s[i] == 's' && i++)
		return (ft_putstr(va_arg(argptr, char *)));
	else if (s[i] == 'p' && i++)
		return (ptemp = va_arg(argptr, void *),
			ft_putptr(ptemp, 0), ft_countptrnbr(ptemp));
	else if ((s[i] == 'd' || s[i] == 'i') && i++)
		return (temp = va_arg(argptr, int),
			ft_putnbr(temp), ft_countdecnbr(temp));
	else if (s[i] == 'u' && i++)
		return (temp = va_arg(argptr, unsigned int),
			ft_putunbr(temp), ft_countudecnbr(temp));
	else if (s[i] == 'x' && i++)
		return (temp = va_arg(argptr, unsigned int),
			ft_puthexlowernbr(temp), ft_counthexnbr(temp));
	else if (s[i] == 'X' && i++)
		return (temp = va_arg(argptr, unsigned int),
			ft_puthexuppernbr(temp), ft_counthexnbr(temp));
	else if (s[i] == '%' && i++)
		return (ft_putchar('%'), 1);
	return (ft_putchar('%'), ft_putchar(s[i]), 2);
}
