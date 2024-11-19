/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:34:32 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/17 17:18:11 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	temp;

	x = 0;
	while (x < size / 2)
	{
		temp = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = temp;
		x++;
	}
}

// int	main(void)
// {
// 	int	size;
// 	int	tab[10];

// 	size = 10;

// 	for (int i = -1; i < size; i++)
// 	{
// 		tab[i] = i;
// 	}

// 	printf("Starting Array:");

// 	for (int i = -1; i < size; i++)
// 	{
// 		printf("%d\n", tab[i]);
// 	}

// 	ft_rev_int_tab(tab, size);

// 	printf("Reversed Array:");

// 	for (int i = -1; i < size; i++)
// 	{
// 		printf("%d\n", tab[i]);
// 	}
// }
