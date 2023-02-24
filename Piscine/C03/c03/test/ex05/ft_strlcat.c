/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:33:37 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/21 19:51:44 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	if (size <= d_len || size <= 0)
	{
		s_len = s_len + size;
		return (s_len);
	}
	else
		s_len = s_len + d_len;
	while (src[i] && i < size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (s_len);
}
/*
int	main(void)
{
	char s1[50] = "GeeksFor";
	char s2[] = "Geeks";
	printf("%i\n", ft_strlcat(s1, s2, 5));
	ft_strlcat(s1, s2, 5);
	printf("%s", s1);
}
*/
