/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:56:17 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/20 17:23:55 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *p, size_t i)
{
	char	*base;

	base = "0123456789abcdef";
	if (p == NULL && i == 0)
	{
		ft_putstr("(nil)");
		return ;
	}
	if ((size_t)p > 0)
	{
		if (i++ == 0)
			ft_putstr("0x");
		ft_putptr((void *)((size_t)p / 16), i);
		ft_putchar(base[(size_t)p % 16]);
	}
}
