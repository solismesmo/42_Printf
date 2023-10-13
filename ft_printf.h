/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:34:45 by livieira          #+#    #+#             */
/*   Updated: 2023/10/13 01:24:23 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DECIMAL_BASE "0123456789"
# define HEXA_UPPER_BASE "0123456789ABCDEF"
# define HEXA_LOWER_BASE "0123456789abcdef"

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *string, ...);
int	ft_parse(char flag, va_list ptr_arg);
int	ft_putchar(char c);
int	ft_strlen(const char *s);
int	ft_putstr(char *str);
int	ft_putnbase(long long n, char *base);
int	ft_putptr(unsigned long n, char *base);

#endif
