/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 02:23:37 by fakoukou          #+#    #+#             */
/*   Updated: 2024/11/16 21:27:54 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	if (str == NULL)
		return (ft_putstr("(null)"));
	count = 0;
	while (*str)
	{
		count += ft_putchar(*str++);
	}
	return (count);
}
