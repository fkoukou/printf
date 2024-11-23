/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:54:29 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/16 21:27:18 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_lower(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n == 0)
	{
		return (write(1, "0", 1));
	}
	if (n >= 16)
	{
		count += ft_putnbr_lower(n / 16);
	}
	count += ft_putchar(base[n % 16]);
	return (count);
}
