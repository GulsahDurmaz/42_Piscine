/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemetz <ldemetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:19:40 by ldemetz           #+#    #+#             */
/*   Updated: 2023/04/02 19:30:56 by ldemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Reads a number from the file descriptor 'fd' as a string of digits.
Skips any leading newline characters and stops reading when a non-digit 
character is encountered.
Returns the number as a string.*/
char	*read_number(long long fd)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 64);
	if (!str)
		exit(1);
	skip_newlines(fd, c);
	i = 0;
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* Reads a value (name of a number) from the file descriptor 'fd' into a string.
Assumes that 'c' already contains the first character of the value.
Continues reading characters until a newline or space character is encountered.
If a space is encountered, skip all following spaces.
Returns the value as a string. */
char	*read_value(long long fd, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 64);
	if (!str)
		exit(1);
	i = 0;
	while (c[0] != '\n' && c[0] != ' ')
	{
		str[i] = c[0];
		read(fd, c, 1);
		i++;
	}
	if (c[0] == ' ')
		skip_spaces(fd, c);
	str[i] = '\0';
	return (str);
}

/*
1. open the input dictionary
2. allocate space for storing 32 pairs of numbers and their names
3. parse every line of the dictionary
3.a use atoi to parse and store the key in the dictionary (number in digits)
3.b skip all whitespaces and one colon in-between
3.c duplicate the name of the number and store in the dictionary
*/
t_list	*init_dict(int fd)
{
	t_list	*dict;

	dict = malloc(sizeof(t_list) * 32);
	if (fd == -1 || !dict)
		exit(1);
	return (dict);
}

void	update_dict_entry(int fd, t_list *dict, int i)
{
	char	c[1];
	char	*tmp;

	tmp = read_number(fd);
	if (is_entry(ft_atoi(tmp)))
	{
		if (number_exists_in_dict(ft_atoi(tmp), dict, i))
		{
			write(1, "Dict Error\n", 11);
			exit(1);
		}
		dict[i].nb = ft_atoi(tmp);
		free(tmp);
		skip_spaces_and_colon(fd, c);
		tmp = read_value(fd, c);
		dict[i].val = ft_strdup(tmp);
		free(tmp);
	}
	else
		go_to_next_line(fd, c);
}

t_list	*read_dict(char *file)
{
	int		i;
	int		fd;
	t_list	*dict;

	fd = open(file, O_RDONLY);
	dict = init_dict(fd);
	i = 0;
	while (i <= 32)
	{
		update_dict_entry(fd, dict, i);
		i++;
	}
	close(fd);
	return (dict);
}
