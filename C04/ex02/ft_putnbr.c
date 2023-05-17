/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:53:51 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/24 10:03:08 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <limits.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		num = 147483648;
	}
	if (num < 0)
	{
		num *= -1;
		ft_putchar('-');
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
}
/*
int	main(void)
{
	ft_putnbr(INT_MIN);
    ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	ft_putnbr(-450);
	ft_putchar('\n');
	ft_putnbr(12);
	ft_putchar('\n');
	ft_putnbr(5);
	ft_putchar('\n');
	return(0);
}*/
