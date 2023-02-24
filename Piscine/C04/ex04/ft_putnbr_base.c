/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:45:34 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/22 18:33:09 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error(char *base, int baselen)
{
	int	i;
	int	j;

	if (baselen < 2)
		return (0);
	i = 0;
	while (i < baselen)
	{
		j = i + 1;
		if (j < baselen && base[i] == base[j])
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;
	int	sign;

	baselen = ft_strlen(base);
	if (ft_error(base, baselen))
	{
		if (nbr < 0)
		{
			sign = -1;
			ft_putchar('-');
			ft_putnbr_base(nbr * sign, base);
		}
		else if (nbr >= 0 && nbr < baselen)
			ft_putchar(base[nbr]);
		else if (nbr >= baselen)
		{
			ft_putnbr_base(nbr / baselen, base);
			ft_putnbr_base(nbr % baselen, base);
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	nbr;

	nbr = -4542;
	ft_putnbr_base(nbr, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(nbr, "01");
	write(1, "\n", 1);
	ft_putnbr_base(nbr, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(nbr, "poneyvif");
	return (0);
}
*/
