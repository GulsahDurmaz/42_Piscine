/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:31:19 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/25 11:20:35 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}	
}
/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;

	a = 18;
	b = 7;

	div = &c;
	mod = &d;
	
	ft_div_mod(a, b, div, mod);

	printf("%d\n", *div);
	printf("%d", *mod);
}
*/
