/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:45:11 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/18 21:05:05 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putunbr(nb / 10);
		ft_putchar (nb % 10 + 48);
	}
	else
		ft_putchar(nb + 48);
}
