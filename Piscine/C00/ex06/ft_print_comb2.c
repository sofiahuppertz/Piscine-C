/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:41:16 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/11 18:26:58 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_char(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			write_char(a / 10 + '0');
			write_char (a % 10 + '0');
			write(1, "  ", 1);
			write_char(b / 10 + '0');
			write_char(b % 10 + '0');
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
