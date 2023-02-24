/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:45:42 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/21 13:44:15 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0')
	{
		if ((*s1 - *s2) == 0)
		{
			s1++;
			s2++;
			n--;
		}
		else
			return (*s1 % 127 - *s2 % 127);
	}
	if (n > 0 && *s1 != '\0' && *s2 == '\0')
		return (*s1 % 127);
	else if (n > 0 && *s1 == '\0' && *s2 != '\0')
		return (0 - *s2 % 127);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "abcde";
	char	str2[] = "abcdf";

	printf("%i ", ft_strncmp(str1, str2, 4));
	printf("%i\n", strncmp(str1, str2, 4));
	printf("%i ", ft_strncmp(str1, str2, 5));
	printf("%i", strncmp(str2, str1, 5));
}
*/
