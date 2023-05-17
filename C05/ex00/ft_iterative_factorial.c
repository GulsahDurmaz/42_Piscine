/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:11:50 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/01 14:57:42 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 13)
		return (0);
	if (nb == 0)
		return (1);
	result = nb;
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
/*
int main()
{
	printf("%d \n", ft_iterative_factorial(4));
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(-7));
	printf("%d \n", ft_iterative_factorial(15));
    write (1, "\n", 1);
	return(0);
}
*/
