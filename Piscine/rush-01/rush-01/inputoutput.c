/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputoutput.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:49:23 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/19 18:56:06 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fuctions.h"
#include <stdlib.h>

int	check(int argc, char *argv[])
{
	if(argc != 5)
		return (1);
	if( ft_strlen(argv[][] != 16))
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	if(!(tab = malloc(sizeof(int) * 16))
			return (0);
	i = -1;
	j = 0;

	while(str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}
