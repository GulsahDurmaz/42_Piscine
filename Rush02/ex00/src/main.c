/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemetz <ldemetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:18:58 by ldemetz           #+#    #+#             */
/*   Updated: 2023/04/02 19:41:24 by ldemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>

/* Prlong long spaces between words. Skips the first word printed*/
void	print_space_if_needed(long long *first_space_printed)
{
	if (!*first_space_printed)
		*first_space_printed = 1;
	else
		write(1, " ", 1);
}

/* return the word associated to a multiple or a number */
void	print_value_for_multiple(long long multiple, t_list *dict)
{
	long long	i;

	i = 0;
	while (dict[i].nb != multiple)
		i++;
	ft_putstr(dict[i].val);
}

/*
This function is responsible for printing the number in words recursively. 
1. checks if the number nbr is 0, and if so, it returns without doing 
anything. This is the stopping condition: after a number is processed, the
recursive function returns 0.
2. Calculate the largest multiple of the number using largest_multiple. 
2.a. If the calculated multiple is greater than or equal to 100, it calls itself
recursively with the result of dividing the number by the multiple.
This step essentially processes the higher magnitude part of the number 
(e.g., thousands, millions, etc.).
3. prlong long a space only between words, skipping the first word printed
4. prlong long the value for the multiple
5. prlong long remaining value
*/
void	print_remaining_number(long long nbr, t_list *dict, long long \
													*first_space_printed)
{
	long long	multiple;

	if (nbr == 0)
		return ;
	multiple = largest_multiple(nbr);
	if (multiple >= 100)
		print_remaining_number(nbr / multiple, dict, first_space_printed);
	print_space_if_needed(first_space_printed);
	print_value_for_multiple(multiple, dict);
	print_remaining_number(nbr % multiple, dict, first_space_printed);
}

/*
This function serves as the main entry polong long for printing the given number 
nbr in words using the provided dictionary dict. It first checks if the number 
is 0, in which case it directly prints the value for 0. Otherwise, it calls 
print_remaining_number.
*/
void	print_number(long long nbr, t_list *dict, long long \
												*first_space_printed)
{
	if (nbr == 0)
	{
		print_value_for_multiple(nbr, dict);
		write(1, "\n", 1);
		return ;
	}
	print_remaining_number(nbr, dict, first_space_printed);
	write(1, "\n", 1);
}

/* 
Description: Take an long long number given as an argument and prlong long it 
in letters.
1. Assign number and dictionary file variables depending on the number of
arguments given. 
2. Load the reference dictionary
3. Prlong long the number given as argument
*/
int	main(int argc, char **argv)
{
	t_list		*dict;
	char		*nbr;
	char		*dict_file;
	long long	first_space_printed;

	if (argc == 3)
	{
		nbr = argv[2];
		dict_file = argv[1];
	}
	else if (argc == 2)
	{
		nbr = argv[1];
		dict_file = "dict.txt";
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	dict = read_dict(dict_file);
	first_space_printed = 0;
	if (is_valid_argument(ft_atoi(nbr)))
		print_number(ft_atoi(nbr), dict, &first_space_printed);
	return (0);
}
