/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:51:10 by livieira          #+#    #+#             */
/*   Updated: 2023/09/28 16:56:47 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	bytes;

	bytes = write(1, &c, 1);
	return (bytes);
}

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s++)
		count++;
	return (count);
}

int	ft_putstr(char *s)
{
	int	s_len;
	int	bytes;

	if (!s)
		return (write(1, "(null)", 6));
	s_len = ft_strlen(s);
	bytes = write(1, s, s_len);
	return (bytes);
}
