/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:37:47 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/20 09:15:09 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	x;	

	x = 'a';
	while (x <= 'z')
	{
		ft_putchar(x);
		x = x +1;
	}
}
/*int	main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return(0);
}*/
