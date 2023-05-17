/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:31:27 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/05 15:44:54 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	if (!arr)
		return (0);
	while (min >= max)
		return (0);
	range = max - min;
	arr = malloc(range * sizeof(int));
	i = 0;
	while (i < range)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
int main(void)
{
	int min;
	int max;
	int *tab;
	int i;
	int size;

	min = -10;
	max = -2;
	tab = ft_range(min, max);
	size = max - min;
	i = 0;
	while (i < size)
	{
		printf("%d \n", tab[i]);
		i++;
	}
	return (0);
}
*/
