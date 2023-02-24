/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:17:37 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/22 11:36:46 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!to_find)
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j] || to_find[j] == '\0')
		{
			if (to_find[j] == '\0')
				return (&str[i - j]);
			i++;
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1[] = "Missisipi";
	char s2[] = "is";
	
//	printf("%s\n", strstr(s1, s2));
	printf("%s", ft_strstr(s1, s2));
}
*/
