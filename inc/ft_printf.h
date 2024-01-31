/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:31:29 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/20 21:42:29 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(const char *s);
int		ft_putchar(char c, int *l);
int		ft_putstr(char *s, int *l);
int		ft_putptr(void *p, int *l);
int		ft_putnbr(long nbr, int base, int uppercase, int *l);
int		ft_percent(const char *s, int *l, va_list argptr);
int		ft_printf(const char *s, ...);

#endif