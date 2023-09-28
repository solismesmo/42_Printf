/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:33:31 by livieira          #+#    #+#             */
/*   Updated: 2023/09/28 01:13:18 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *string, ...)
{
	int		i;
	va_list	pointer_arg;

	va_start(pointer_arg, string);
	

	i = 0;
	while (string[i++])
	{
		if (string[i] == '%')
		{
			printf("%d", i);
			if (string[i+1] == 'c')
				printf("qq coisa%c%d",va_arg(pointer_arg, const char *), i);
		}
		else
		{
			printf("%c", string[i]);
		}
	}

	//printf(va_arg(pointer_arg, const char *));

	va_end(pointer_arg);

}
