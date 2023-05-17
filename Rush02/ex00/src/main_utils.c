/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemetz <ldemetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:29:28 by ldemetz           #+#    #+#             */
/*   Updated: 2023/04/02 19:41:07 by ldemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

/* Get the largest tens of the current number */
int	largest_tens(long long nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

/* Get the largest multiple of the current number */
int	largest_multiple(long long nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (largest_tens(nb));
}

long long	is_valid_argument(long long nbr)
{
	if (nbr > UINT_MAX)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	else
		return (1);
}

int	is_entry(long long key)
{
	long long	numbers[32];
	int			i;

	create_array(numbers);
	i = 0;
	while (i < 32)
	{
		if (key == numbers[i])
			return (1);
		i++;
	}
	return (0);
}

long long	number_exists_in_dict(long long number, t_list *dict, \
														long long dict_size)
{
	long long	i;

	i = 0;
	while (i < dict_size)
	{
		if (dict[i].nb == number)
			return (1);
		i++;
	}
	return (0);
}
