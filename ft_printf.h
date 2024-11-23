/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:23:17 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/16 21:26:11 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printf1(char c, va_list arg);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putpoint(void *addr);
int	ft_putunsigned(unsigned int n);
int	ft_putnbr_lower(unsigned long n);
int	ft_putnbr_upper(unsigned long n);
int	ft_putnbr(long n);

#endif
