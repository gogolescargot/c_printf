/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdecnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:54:07 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/18 23:30:24 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_countdecnbr(long nb)
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
