/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 06:19:16 by livieira          #+#    #+#             */
/*   Updated: 2023/09/01 06:20:06 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* studying syscalls*/
int	main(void)
{
	char	buf[20];
	int		n;

	n = read(0, buf, 20);
	while (n > 0)
	{
		printf("%d\n", n);
		write(1, buf, n);
	}
	return (0);
}
