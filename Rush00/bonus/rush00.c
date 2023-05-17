/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdiander <tdiander@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:47:54 by tdiander          #+#    #+#             */
/*   Updated: 2023/03/18 17:10:24 by spradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (((row == 1) || (row == y)) && (((col == 1) || (col == x))))
				ft_putchar('o');
			else if (((row == 1) && (col < x)) || ((row == y) && (col < x)))
				ft_putchar('-');
			else if (((row != y) || (row != 1)) && ((col == 1) || (col == x)))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col ++;
		}
		ft_putchar('\n');
		row ++;
	}
}
