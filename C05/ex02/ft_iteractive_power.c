/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 22:34:04 by misoares          #+#    #+#             */
/*   Updated: 2024/02/07 15:42:43 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
	{
		res *= nb;
		if (res < -2147483648 || res > 2147483647)
		{
			return (0);
		}
	}
	return (res);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("(2, 31)%d \n", ft_iterative_power(2,31));
	printf("(0, 0) %d \n", ft_iterative_power(0, 0));
	printf("(0, 1) %d \n", ft_iterative_power(0, 1));
	printf("(-2, 31) %d \n", ft_iterative_power(-2, 31));
	printf("(-2, 30 )%d \n", ft_iterative_power(-2, 30));
	return (0);
}
*/