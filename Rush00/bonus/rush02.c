/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spradel <spradel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:36:37 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/18 16:47:46 by spradel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 1;
	while (r <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && r == 1) || (c == x && r == 1))
				ft_putchar('A');
			else if ((c == x && r == y) || (c == 1 && r == y && y != 1))
				ft_putchar('C');
			else if (((r == y) || (r == 1)) || ((c == 1) || (c == x)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c ++;
		}
		ft_putchar('\n');
		r ++;
	}
}
