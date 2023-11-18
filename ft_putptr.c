/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:56:17 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/18 22:24:05 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putptr(void *p, size_t i)
{
	char	*base;

	base = "0123456789abcdef";
	if (p == NULL && i == 0)
		return (ft_putstr("(nil)"), 5);
	if ((size_t)p > 0)
	{
		if (i++ == 0)
			ft_putstr("0x");
		ft_putptr((void *)((size_t)p / 16), i);
		ft_putchar(base[(size_t)p % 16]);
	}
	return (i + 2);
}
