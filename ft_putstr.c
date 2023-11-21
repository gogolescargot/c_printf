/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:31:12 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/21 06:29:08 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *s)
{
	if (!s)
		return (write(1, "(null)", 6), 6);
	if (write(1, s, ft_strlen(s)) == -1)
		return (0);
	return (ft_strlen(s));
}
