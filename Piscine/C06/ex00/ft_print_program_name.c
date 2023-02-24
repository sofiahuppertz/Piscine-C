/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:27:43 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/22 17:11:57 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
*/
int	main(int argc, char *argv[])
{
	(void) argc;
	while (*argv[0] != 0)
	{
		write(1, argv[0], 1);
		argv[0]++;
	}
	return (0);
}
