/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:56:17 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/17 20:49:58 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putaddr(void *p, size_t i)
{
	char	*base;
	
	base = "0123456789abcdef";
	if (p == NULL && i == 0)
		return (ft_putstr("(nil)"));
	if (p > 0)
	{
		if (i++ == 0)
			ft_putstr("0x");
		ft_putaddr((void *)((size_t)p / 16), i);
		ft_putchar(*(base + ((size_t)p % 16)));
	}
}
