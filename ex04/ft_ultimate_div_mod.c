/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:13:47 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/17 17:18:06 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 9;
// 	b = 2;
// 	printf("a Value: %d\n", a);
// 	printf("b Value: %d\n", b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a diveded by b result: %d\n", a);
// 	printf("b modulo b result: %d\n", b);

// 	return (0);
// }
