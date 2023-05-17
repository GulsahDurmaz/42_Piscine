/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschroed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 15:55:58 by jschroed          #+#    #+#             */
/*   Updated: 2023/03/26 16:44:54 by jschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);

int	check(int ac, char **av)
{
	if (ac != 2)
		return (1);
	if (ft_strlen(av[1]) != 31)
		return (1);
	return (0);
}

int	*get_numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc(sizeof(int) * 16);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			tab[j++] = ft_atoi(str + i);
		}
	}
	return (tab);
}
