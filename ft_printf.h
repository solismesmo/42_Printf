/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:34:45 by livieira          #+#    #+#             */
/*   Updated: 2023/10/11 17:08:21 by livieira         ###   ########.fr       */
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
int	ft_parse(char flag, va_list pointer_arg);
int	ft_putchar(char c);
int	ft_strlen(const char *s);
int	ft_putstr(char *str);

#endif
