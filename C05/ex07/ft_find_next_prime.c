/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:22:52 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/02 11:57:38 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
	{
		return (1);
	}
	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i < (nb / 2) && nb > 0)
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{	
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			nb++;
	}
	return (0);
}
/*
int main()
{
	printf("%d \n", ft_find_next_prime(-1));
    printf("%d \n", ft_find_next_prime(0));
    printf("%d \n", ft_find_next_prime(1));
    printf("%d \n", ft_find_next_prime(2));
    printf("%d \n", ft_find_next_prime(8));
    printf("%d \n", ft_find_next_prime(12));
	return (0);
}
*/
