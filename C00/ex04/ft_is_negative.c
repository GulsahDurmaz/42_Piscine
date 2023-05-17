/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:39:19 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/20 09:19:55 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
}

/*int main()
{
	ft_is_negative(-10);
	return(0);
}*/
