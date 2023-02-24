/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:49:26 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/23 12:21:08 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcomp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

void	bubble_sort(int argc, char *argv[])
{
	int	length;
	int	i;
	int	j;

	length = argc;
	i = 1;
	while (i < length)
	{
		j = 1;
		while (j < length - 1)
		{
			if (ft_strcomp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	bubble_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
