/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:23:36 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/16 21:48:55 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpoint(void *addr)
{
	int				count;
	unsigned long	ptr;

	count = 0;
	if (addr == NULL)
	{
		return (ft_putstr("(nil)"));
	}
	ptr = (unsigned long)addr;
	count += ft_putstr("0x");
	count += ft_putnbr_lower(ptr);
	return (count);
}
