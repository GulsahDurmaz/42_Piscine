/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 17:23:17 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/01 18:21:46 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	long	a;
	long	b;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	a = 1;
	if (nb > 0)
	{
		while (a * a <= nb)
		{
			if (a * a == nb)
			{
				return (a);
			}
			a++;
		}
	}
	return (0);
}
/*
int main()
{
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 16, ft_sqrt(16));
	printf("sqrt of %d is %d\n", -16, ft_sqrt(-16));
	printf("sqrt of %d is %d\n", 2147483647, ft_sqrt(2147483647));
    return (0);
}
*/
