/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:34:45 by livieira          #+#    #+#             */
/*   Updated: 2023/09/28 16:55:33 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *string, ...);
int	ft_parse(char flag, va_list pointer_arg);
int	ft_putchar(char c);
int	ft_strlen(const char *s);
int	ft_putstr(char *str);



#endif
