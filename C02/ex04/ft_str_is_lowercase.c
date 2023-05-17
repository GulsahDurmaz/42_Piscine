/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:08:27 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/22 16:09:20 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{	
		if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char str1[] = "abcdef";
	char str2[] = "ab 4 FG4";
	char str3[] = "";

	printf("abcdef %d \n", ft_str_is_lowercase(str1)); 
	printf("ab 4 FG4 %d \n", ft_str_is_lowercase(str2));
	printf("empty %d \n", ft_str_is_lowercase(str3));
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
