/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:24:19 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/17 17:18:03 by reriebsc         ###   ########.fr       */
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

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 7;
// 	b = 9;
// 	printf("Value a: %d\n", a);
// 	printf("Value b: %d\n", b);
// 	ft_swap(&a, &b);
// 	printf("Value a swaped: %d\n", a);
// 	printf("Value b swaped: %d\n", b);
// 	return (0);
// }
