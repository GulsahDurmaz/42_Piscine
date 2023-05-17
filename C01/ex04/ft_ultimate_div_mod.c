/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:34:35 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/20 11:20:44 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main()
{
	int x;
	int y;
	int *a;
	int *b;

	x = 9;
	y = 5;;

	ft_ultimate_div_mod(&x, &y);

	printf("%d\n", x);
	printf("%d\n", y);
}
*/
