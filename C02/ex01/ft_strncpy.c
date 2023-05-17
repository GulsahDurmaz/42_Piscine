/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:59:18 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/22 14:47:00 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char src[] = "Hello World!";
	char dest[] = "Byeee Sunshine";

	char src2[] = "Hello Wolrd!";
    char dest2[] = "Byeee Sunshine";

	printf("src: %s \n", src);
	printf("dest: %s \n", dest);

	ft_strncpy(dest, src, 5);
	strncpy(dest2, src2, 5);

	printf("new dest: %s \n", dest);
	printf("new dest2: %s \n", dest2);
	return(0);
}
*/
/*
strncpy(char *dest, const char *src, size_t n)
           {
               size_t i;

               for (i = 0; i < n && src[i] != '\0'; i++)
                   dest[i] = src[i];
               for ( ; i < n; i++)
                   dest[i] = '\0';

               return dest;
           }

*/
