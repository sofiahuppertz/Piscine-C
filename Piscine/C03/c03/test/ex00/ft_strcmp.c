/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:51:44 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/21 13:20:05 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "abeille";
	char s2[] = "abeille";

	printf("%i\n", ft_strcmp(s1, s2));
	printf("%i", strcmp(s1, s2));
}
*/
