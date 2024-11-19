/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:53:07 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/18 13:53:20 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 9;
// 	b = 2;
// 	div = 0;
// 	mod = 0;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("a diveded by b result: %d\n", div);
// 	printf("a modulo b result: %d\n", mod);

// 	return (0);
// }
