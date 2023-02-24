/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intputoutput2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:56:58 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/19 19:01:49 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr= 0;
	nbrminus = 0;
	while((str[i] >= 0 && str[i] <= 9) ||
