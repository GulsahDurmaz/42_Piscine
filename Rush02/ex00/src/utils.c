/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemetz <ldemetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:25:45 by ldemetz           #+#    #+#             */
/*   Updated: 2023/04/02 19:38:55 by ldemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

long long	ft_atoi(const char *str)
{
	long long	result;
	int			sign;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || \
			*str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	go_to_next_line(long long fd, char *c)
{
	while (read(fd, c, 1) && *c != '\n')
		;
}

void	create_array(long long *numbers)
{
	int	i;

	i = 0;
	while (i < 21)
	{
		numbers[i] = i;
		i++;
	}
	numbers[21] = 30;
	numbers[22] = 40;
	numbers[23] = 50;
	numbers[24] = 60;
	numbers[25] = 70;
	numbers[26] = 80;
	numbers[27] = 90;
	numbers[28] = 100;
	numbers[29] = 1000;
	numbers[30] = 1000000;
	numbers[31] = 1000000000;
}
