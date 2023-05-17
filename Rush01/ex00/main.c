/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:53:55 by jschroed          #+#    #+#             */
/*   Updated: 2023/03/26 16:51:54 by jschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

//problem here 
int	*get_numbers(char *str);
int	check(int ac, char **av);
int	check_case(int tab[4][4], int pos, int clues[16]);
int	check_double(int tab[4][4], int pos, int num);
//problem here 

int	check_row_left(int tab[4][4], int pos, int clues[16]);
int	check_col_down(int tab[4][4], int pos, int clues[16]);
int	check_row_right(int tab[4][4], int pos, int clues[16]);
int	check_col_up(int tab[4][4], int pos, int clues[16]);

int	check_case(int tab[4][4], int pos, int clues[16])
{
	if (check_row_left(tab, pos, clues) == 1)
		return (1);
	if (check_row_right(tab, pos, clues) == 1)
		return (1);
	if (check_col_down(tab, pos, clues) == 1)
		return (1);
	if (check_col_up(tab, pos, clues) == 1)
		return (1);
	return (0);
}

int	solve(int tab[4][4], int clues[16], int pos)
{
	int	size;

	if (pos == 16)
	{
		return (0);
	}
	size = 0;
	while (++size <= 4)
	{
		if (check_double(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check_case(tab, pos, clues) == 0)
			{
				if (solve(tab, clues, pos + 1) == 0)
					return (0);
			}
			else
			{
				tab[pos / 4][pos % 4] = 0;
			}
		}
	}
	return (1);
}

void	display_solution(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int	*clues;
	int	tab[4][4];
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 4)
		while (++j < 4)
			tab[i][j] = 0;
	if (check(ac, av) == 1)
		return (0);
	clues = get_numbers(av[1]);
	if (solve(tab, clues, 0) == 0)
	{
		display_solution(tab);
	}
	else
	{
		ft_putstr("ERROR\n");
	}
	return (0);
}
