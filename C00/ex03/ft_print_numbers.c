/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:18:20 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/20 09:17:57 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	d;

	d = '0';
	while (d <= '9')
	{
		ft_putchar(d);
		d++;
	}
}
/*int	main()
{
	ft_print_numbers();
	return(0);
}*/
