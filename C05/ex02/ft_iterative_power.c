/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:11:03 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/01 15:45:40 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int main()
{
	printf("%d \n", ft_iterative_power(0, 0));
	printf("%d \n", ft_iterative_power(5, -2));
	printf("%d \n", ft_iterative_power(2, 3));
	printf("%d \n", ft_iterative_power(2, 0));
	printf("%d \n", ft_iterative_power(0, 3));
	return (0);
}
*/
