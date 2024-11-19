/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:46:16 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/18 13:52:37 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	swapp;
	int	x;

	swapp = 1;
	while (swapp)
	{
		swapp = 0;
		x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
				ft_swap(&tab[x], &tab[x +1]);
				swapp = 1;
			}
			x++;
		}
	}
}

// int	main(void)
// {
// 	int	size;
// 	int	tab[25] = {25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

// 	size = 25;
// 	printf("Starting Array:");

// 	for (int i = -1; i < size; i++)
// 	{
// 		printf("%d\n", tab[i]);
// 	}
// 	ft_sort_int_tab(tab, 25);
// 	printf("Sorted Array:");

// 	for (int i = -1; i < size; i++)
// 	{
// 		printf("%d\n", tab[i]);
// 	}
// }

