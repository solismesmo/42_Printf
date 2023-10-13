/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:19:16 by livieira          #+#    #+#             */
/*   Updated: 2023/10/13 16:30:01 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	void *pointer = NULL;

	ft_printf("Minha função:\n");
	ft_printf("%c\n", 'a');
	printf("Função original:\n");
	printf("%c\n", 'a');

	ft_printf("Minha função:\n");
	ft_printf("%s\n", "Hello World");
	printf("Função original:\n");
	printf("%s\n", "Hello World");

	ft_printf("Minha função:\n");
	ft_printf("%p\n", pointer);
	printf("Função original:\n");
	printf("%p\n", pointer);

	ft_printf("Minha função:\n");
	ft_printf("%d\n", 0);
	printf("Função original:\n");
	printf("%d\n", 0);

	ft_printf("Minha função:\n");
	ft_printf("%i\n", -1);
	printf("Função original:\n");
	printf("%i\n", -1);

	ft_printf("Minha função:\n");
	ft_printf("%u\n", INT_MAX);
	printf("Função original:\n");
	printf("%u\n", INT_MAX);

	ft_printf("Minha função:\n");
	ft_printf("%u\n", INT_MIN);
	printf("Função original:\n");
	printf("%u\n", INT_MIN);

	ft_printf("Minha função:\n");
	ft_printf("%d\n", INT_MAX);
	printf("Função original:\n");
	printf("%d\n", INT_MAX);

	ft_printf("Minha função:\n");
	ft_printf("%d\n", INT_MIN);
	printf("Função original:\n");
	printf("%d\n", INT_MIN);

	ft_printf("Minha função:\n");
	ft_printf("%s\n", "");
	printf("Função original:\n");
	printf("%s\n", "");

	ft_printf("Minha função:\n");
	ft_printf("%x\n", 123);
	printf("Função original:\n");
	printf("%x\n", 123);

	ft_printf("Minha função:\n");
	ft_printf("%X\n", 123);
	printf("Função original:\n");
	printf("%X\n", 123);

	ft_printf("Minha função:\n");
	ft_printf("%x\n", -123);
	printf("Função original:\n");
	printf("%x\n", -123);

	ft_printf("Minha função:\n");
	ft_printf("%X\n", -123);
	printf("Função original:\n");
	printf("%X\n", -123);

	ft_printf("Minha função:\n");
	ft_printf("%c %c %c %c\n", 'a', 'b', 'c', 'd');
	printf("Função original:\n");
	printf("%c %c %c %c\n", 'a', 'b', 'c', 'd');
}
