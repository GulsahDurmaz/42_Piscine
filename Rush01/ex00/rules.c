/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:57:08 by jschroed          #+#    #+#             */
/*   Updated: 2023/03/26 16:52:20 by jschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int tab[4][4], int pos, int size)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
	{
		if (tab[i][pos % 4] == size)
		{
			return (1);
		}
	}
	i = -1;
	while (++i < pos % 4)
	{
		if (tab[pos / 4][i] == size)
		{
			return (1);
		}
	}
	return (0);
}

int	check_col_up(int tab[4][4], int pos, int clues[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max_size)
			{
				max_size = tab[i][pos % 4];
				visible_towers++;
			}
			i++;
		}
		if (clues[pos % 4] != visible_towers)
		{
			return (1);
		}
	}
	return (0);
}

int	check_row_right(int tab[4][4], int pos, int clues[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				visible_towers++;
			}
		}
		if (clues[12 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(int tab[4][4], int pos, int clues[16])
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
		if (clues[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(int tab[4][4], int pos, int clues[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (clues[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}
