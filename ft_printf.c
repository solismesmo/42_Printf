/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:33:31 by livieira          #+#    #+#             */
/*   Updated: 2023/10/13 01:24:38 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	va_list		ptr_arg;
	int			i;
	int			bytes;

	if (!string)
		return (-1);
	va_start(ptr_arg, string);
	i = 0;
	bytes = 0;
	while (string[i])
	{
		if (string[i] == '%' && string[i + 1] != '\0')
			bytes += ft_parse(string[++i], ptr_arg);
		else
			bytes += ft_putchar(string[i]);
		i++;
	}
	va_end(ptr_arg);
	return (bytes);
}
