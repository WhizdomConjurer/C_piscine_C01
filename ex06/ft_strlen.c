/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reriebsc <reriebsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:23:06 by reriebsc          #+#    #+#             */
/*   Updated: 2024/11/17 17:18:09 by reriebsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	if (str[0] == '\0')
	{
		return (0);
	}
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

// int	main(void)
// {
// 	int	x;
// 	char	str[] = "Hello World!";

// 	x = ft_strlen(str);
// 	printf("Length of the String is: %d", x);
// 	return (0);
// }
