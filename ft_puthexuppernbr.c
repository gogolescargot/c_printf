/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexuppernbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:59:52 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/18 21:00:41 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexuppernbr(unsigned int nb)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nb > 15)
	{
		ft_puthexuppernbr(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base [nb]);
}
