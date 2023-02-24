/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:58:57 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/19 19:33:10 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[50] = "This is the source string";
	char	s2[50] = "And this is the destintation string";

	ft_strcpy(s2, s1);
	printf("%s\n", s2);
	printf("%p", ft_strcpy(s2, s1));
}
*/
