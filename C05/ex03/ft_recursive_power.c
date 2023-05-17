/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 15:11:03 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/01 16:05:08 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	//int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	return (nb);
}

int main()
{
	printf("%d \n", ft_recursive_power(0, 0));
	printf("%d \n", ft_recursive_power(5, -2));
	printf("%d \n", ft_recursive_power(2, 3));
	printf("%d \n", ft_recursive_power(2, 0));
	printf("%d \n", ft_recursive_power(0, 3));
	return (0);
}

