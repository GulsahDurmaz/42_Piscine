/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.de>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 12:36:06 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/28 12:58:47 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (!n)
	{
		return (0);
	}
	if (*s1)
		return (*s1);
	if (*s2)
		return (-*s2);
	return (0);
}
/*
int main()
{
	unsigned int n;

	char s1[] = "Hello";
	char s2[] = "";
	n = 5;

	printf("%d \n", strncmp(s1, s2, n));
	printf("%d \n", ft_strncmp(s1, s2, n));
	return(0);
}
*/
