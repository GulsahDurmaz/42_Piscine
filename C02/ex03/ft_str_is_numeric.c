/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:08:27 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/22 16:05:01 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{	
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char str1[] = "1 to 5";
	char str2[] = "4854434";
	char str3[] = "";

	printf("1 to 5 %d \n", ft_str_is_numeric(str1)); 
	printf("4854434 %d \n", ft_str_is_numeric(str2));
	printf("empty %d \n", ft_str_is_numeric(str3));
}
*/
/*
#include<stdio.h>
int main()
{
    //we are printing the ASCII value of 'a'
    char a ='a';
    printf("%d",a);
    return 0;
}
*/
