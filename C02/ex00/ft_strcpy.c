/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:57:10 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/22 14:50:24 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Hello";
	char dest[] = "xxxxxxxxx" ;

	printf("src: %s \n", src);
	printf("dest: %s \n", dest);
	ft_strcpy(dest, src);
	
	printf("new: %s \n", dest);
	return (0);
}
*/
