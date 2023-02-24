/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:47:47 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/13 10:32:05 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnb(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	i;
	
	i = nb;
	while (i >= 1)
	{
	putnb(i % 10 + '0');
	i = nb / 10;
	}
}

int	main(void)
{
	ft_putnbr(4235);
}
