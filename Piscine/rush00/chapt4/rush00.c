/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santadji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:19:28 by santadji          #+#    #+#             */
/*   Updated: 2023/02/11 13:57:23 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	a;
	int	b;
	int 	c;

	a = 0;
	b = 0;

	ft_putchar('A');
	while (a < x - 2)
	{
		ft_putchar('B');
		a++;
	}
	if (a > 0)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}

	while (b < y - 2)
	{
		c = 0;
		ft_putchar('B');
		while (c < x - 2)
		{
			ft_putchar(' ');
			c++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		b++;
	}

	a = 0;
	ft_putchar('C');
	while(a < x - 2)
	{
		ft_putchar('B');
		a++;
	}
	ft_putchar('C');
	ft_putchar('\n');

}

int main(void)
{
	rush(0, 0);
	
}
