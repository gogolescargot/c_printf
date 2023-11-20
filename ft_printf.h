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
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
void	ft_putnbr(int nb);
void	ft_putunbr(unsigned int nb);
void	ft_puthexlowernbr(unsigned int nb);
void	ft_puthexuppernbr(unsigned int nb);
void	ft_putptr(void *p, size_t i);
int		ft_countdecnbr(int nb);
int		ft_countudecnbr(unsigned int nb);
int		ft_counthexnbr(unsigned int nb);
int		ft_countptrnbr(void *p);
size_t	ft_percent(const char *s, size_t i, va_list argptr);
int		ft_printf(const char *s, ...);

#endif