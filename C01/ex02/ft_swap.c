/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:30:01 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/20 16:47:14 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}
/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main()
{
	int a;
	int b;

	a = 42;
	b = 24;

	ft_swap (&a, &b);
	printf ("%d \n", a);
	printf ("%d", b);
}
*/
