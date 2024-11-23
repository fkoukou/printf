/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 00:38:05 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/17 11:30:47 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf1(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'c')
		count += ft_putchar((char)va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == '%')
		count += ft_putchar('%');
	else if (c == 'x')
		count += ft_putnbr_lower(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_putnbr_upper(va_arg(args, unsigned int));
	else if (c == 'p')
		count += ft_putpoint(va_arg(args, void *));
	return (count);
}
