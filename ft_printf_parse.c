/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:59:26 by livieira          #+#    #+#             */
/*   Updated: 2023/09/28 16:59:58 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(char flag, va_list pointer_arg)
{
	int	bytes;

	bytes = 0;
	if (flag == 'c')
		bytes += ft_putchar(va_arg(pointer_arg, int));
	else if (flag == 's')
		bytes += ft_putstr(va_arg(pointer_arg, char *));
	return (bytes);
}
