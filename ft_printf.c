/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:33:31 by livieira          #+#    #+#             */
/*   Updated: 2023/09/28 17:06:54 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	va_list		pointer_arg;
	int			i;
	int			bytes;

	if (!string)
		return (-1);
	va_start(pointer_arg, string);
	i = 0;
	bytes = 0;
	while (string[i])
	{
		if (string[i] == '%' && string[i + 1] != '\0')
			bytes += ft_parse(string[++i], pointer_arg);
		else
			bytes += ft_putchar(string[i]);
		i++;
	}
	va_end(pointer_arg);
	return (bytes);
}
