/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:51:10 by livieira          #+#    #+#             */
/*   Updated: 2023/10/13 01:24:51 by livieira         ###   ########.fr       */
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
	while (s[count])
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

int	ft_putnbase(long long n, char *base)
{
	int	bytes;
	int	base_size;

	bytes = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		bytes += ft_putchar('-');
		n = -n;
	}
	if (n >= base_size)
		bytes += ft_putnbase((n / base_size), base);
	bytes += ft_putchar(base[n % base_size]);
	return (bytes);
}

int	ft_putptr(unsigned long n, char *base)
{
	int	bytes;
	int	base_size;

	if (n == 0)
		return (ft_putstr("(nil)"));
	bytes = 0;
	base_size = ft_strlen(base);
	if (n >= (unsigned long)base_size)
		bytes += ft_putptr((n / base_size), base);
	else
		bytes += ft_putstr("0x");
	bytes += ft_putchar(base[n % base_size]);
	return (bytes);
}
