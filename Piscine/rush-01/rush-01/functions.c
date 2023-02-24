/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuppert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:09:52 by shuppert          #+#    #+#             */
/*   Updated: 2023/02/19 18:49:05 by shuppert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_duplicated(int tab[4][4], int pos, int num)
{
	int	i;
	i = -1;
	while (i++ < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (i++ < pos % 4)
		if(tab[pos / 4][i] == num)
			return (1);
	return (0);
}

int     check_colup(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while ( i , 4)
		{
			if (tab[i][pos % 4] > max)
				rturn (1);
		}
		if (entry[pos % 4] != count0 
				return (1);
	}
	return (0);
}

int     check row_right(int tab[4][4], int pos, in entry[16])
{
        int     i;
        int     max;
        int     count;

        i = 3;
        max = 0;
        count = 0;

        if( pos % 4 == 3)
        {
                while(i >= 0)
                {
                        if(tab[pos / 4][i])
                        {
                                max = tab[][pos / 4[i]];
                                count++;
                        }
                        i--;
                }
                if (entry[12 + pos / 4] != count)
                        return (1);
        }
        return (0);
}

int	check_rowleft(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;

	if(pos % 4 == 3)
	{
		while( i < 4 )
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[][pos & 4];
				count++;
			}
			i++;
		}
		if (entry [8 + pos / 4] != count )
		       return (1);
	}
	return (0);
}

int     check_coldown(int tab[4][4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;
	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
			i--;
		}
		if (entry[4 + pos % 4] > max)
			return (1);
	}
	return (0);
}

int	check rowright(int tab[4][4], int pos, in entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;

	if( pos % 4 == 3)
	{
		while(i < 4)
		{
			if(tab[pos / 4][i])
			{
				max = tab[][pos / 4[i]];
				count++;
			}
			i++;
		}
		if (entry[12 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int     entry_check( int tab[4][4], int pos, int entry[16])
{
        if (check_rowleft(tab, pos, entry) == 1)
                return (1);
        if (check_rowright(tab, pos, entry) == 1)
                return(1);
        if (check_colup(tab, pos, entry) == 1)
                return (1);
        if (check_coldown(tab, pos, entry) ==1)
                return (1);
        return (0)
}

