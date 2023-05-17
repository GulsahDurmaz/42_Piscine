/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:08:27 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/22 16:24:25 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{	
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char str1[] = "ABC";
	char str2[] = "¶";
	char str3[] = "";

	printf("ABC %d \n", ft_str_is_printable(str1)); 
	printf("unprintable %d \n", ft_str_is_printable(str2));
	printf("empty %d \n", ft_str_is_printable(str3));
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
