/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:08:27 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/22 15:46:02 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{	
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char str1[] = "Hello @home & there!";
	char str2[] = "Hello";
	char str3[] = "";

	printf("%d \n", ft_str_is_alpha(str1)); 
	printf("%d \n", ft_str_is_alpha(str2));
	printf("%d \n", ft_str_is_alpha(str3));
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
