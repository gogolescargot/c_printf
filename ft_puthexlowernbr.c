/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlowernbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:44:19 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/18 21:00:37 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexlowernbr(unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb > 15)
	{
		ft_puthexlowernbr(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb]);
}
