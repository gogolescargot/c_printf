/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdecnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:54:07 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/19 01:45:32 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_countdecnbr(int nb)
{
	size_t	i;
	size_t	unb;

	i = 1;
	if (nb < 0)
	{
		i++;
		unb = (size_t)nb * -1;
	}
	else
		unb = (size_t)nb;
	while (unb >= 10)
	{
		i++;
		unb /= 10;
	}
	return (i);
}

int	ft_countudecnbr(unsigned int nb)
{
	size_t	i;

	i = 1;
	while (nb >= 10)
	{
		i++;
		nb /= 10;
	}
	return (i);
}
