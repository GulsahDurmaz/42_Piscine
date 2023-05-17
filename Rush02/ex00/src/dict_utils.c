/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldemetz <ldemetz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:27:01 by ldemetz           #+#    #+#             */
/*   Updated: 2023/04/02 19:40:18 by ldemetz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

/* Continuously reads characters from the file descriptor 'fd' into 'c'
and skips all spaces until a non-space character is encountered. */
void	skip_spaces(long long fd, char *c)
{
	while (read(fd, c, 1) && *c == ' ')
		;
}

/* Continuously reads characters from the file descriptor 'fd' into 'c' and
skips all newline characters until a non-newline character is encountered. */
void	skip_newlines(long long fd, char *c)
{
	while (read(fd, c, 1) && *c == '\n')
		;
}

/* Skips all spaces in the file descriptor 'fd' by calling skip_spaces().
If a colon is encountered, it skips the colon and any spaces that follow. */
void	skip_spaces_and_colon(long long fd, char *c)
{
	skip_spaces(fd, c);
	if (c[0] == ':')
		skip_spaces(fd, c);
}
