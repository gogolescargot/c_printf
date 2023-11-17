/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:45:11 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/17 19:49:25 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar (nb % 10 + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
