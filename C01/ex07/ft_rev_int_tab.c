/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:20:49 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/03/25 11:16:20 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>
void	swap(int *a, int *b)
{
	int	ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size / 2))
	{	
		swap (&tab[i], &tab[size - 1 - i]);
		i++;
	}
}
/*
int	main()
{
	int tab1[] = {1, 2, 3, 4, 5};
	int size1 = 5;

	ft_rev_int_tab(tab1, size1);
    int i;
        for (i = 0; i < size1; i++)
            printf("%d", tab1[i]);

	int tab2[] = {1, 2, 3, 4, 5, 6};
    int size2 = 6;

	ft_rev_int_tab(tab2, size2);
    int j;
        for (j = 0; j < size2; j++)
            printf("%d", tab2[j]);

	return(0);
}
*/
