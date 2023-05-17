/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:01:09 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/05 15:34:06 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	if (!arr)
	{
		return (-1);
	}
	if (min >= max)
	{
		return (0);
	}
	len = max - min;
	arr = malloc(len * sizeof(int));
	*range = arr;
	i = 0;
	if (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (len);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	printf("%d \n", size);

}
*/
