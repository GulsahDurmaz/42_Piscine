/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:08:07 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/25 10:19:06 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	swap(int *a, int *b)
{
	int	ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - i - 1))
		{	
			if (tab[j] > tab[j + 1])
				swap (&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
/*
int	main()
{
    int	tab[] = { 5, 1, 4, 2, 8 };
	int	size = 5;
	ft_sort_int_tab(tab, size);
	int	i;
	for	(i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return 0;
}
*/
