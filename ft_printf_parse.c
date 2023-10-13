/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:59:26 by livieira          #+#    #+#             */
/*   Updated: 2023/10/13 01:24:08 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(char flag, va_list ptr_arg)
{
	int	bytes;

	bytes = 0;
	if (flag == 'c')
		bytes += ft_putchar(va_arg(ptr_arg, int));
	else if (flag == 's')
		bytes += ft_putstr(va_arg(ptr_arg, char *));
	else if (flag == 'x')
		bytes += ft_putnbase(va_arg(ptr_arg, int), HEXA_LOWER_BASE);
	else if (flag == 'X')
		bytes += ft_putnbase(va_arg(ptr_arg, int), HEXA_UPPER_BASE);
	else if (flag == 'u')
		bytes += ft_putnbase(va_arg(ptr_arg, unsigned int), DECIMAL_BASE);
	else if (flag == 'i' || flag == 'd')
		bytes += ft_putnbase(va_arg(ptr_arg, int), DECIMAL_BASE);
	else if (flag == '%')
		bytes += ft_putchar('%');
	else if (flag == 'p')
		bytes += ft_putptr(va_arg(ptr_arg, unsigned long), HEXA_LOWER_BASE);
	return (bytes);
}
