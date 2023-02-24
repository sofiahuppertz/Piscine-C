/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:26:45 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/21 08:44:58 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	num;

	count = 0;
	while (*str == 32 || *str == 43 || *str == 45)
	{	
		if (*str == 45)
			count++;
		str++;
	}
	if (count % 2 == 1)
		sign = (-1);
	else
		sign = 1;
	num = 0;
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (sign * num);
}
/*
int	main(void)
{
	printf("%i", ft_atoi("  --++---2345abc671"));
}
*/
