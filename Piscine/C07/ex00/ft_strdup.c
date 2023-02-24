/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:49:22 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/23 19:30:27 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
}

char	*ft_strdup(char *src)
{
	char *dest;
	int	n;
	int	i;

	n = ft_strlen(*src);
	dest = malloc(n * sizeof(char));

	if(dest == NULL)
		return ("x");
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}
free(malloc);
