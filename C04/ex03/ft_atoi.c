/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:33:26 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/29 11:45:30 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	c;
	int	num;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	c = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			c++;
		str++;
	}
	num = 0;
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if (!(c % 2))
		return (num);
	return (-num);
}
/*
int main(void)
{
	char str[] = " ---+--+1234ab567";
	printf("%d \n", ft_atoi(str));
	return(0);
}
*/
