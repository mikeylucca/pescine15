/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:31:57 by misoares          #+#    #+#             */
/*   Updated: 2024/01/28 16:46:05 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// div = division
// mod = module

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0) // checks if the value of b is not 0
	{
		// calculates the division and the remainder
		*div = a / b;
		*mod = a % b; 
	}
}

int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 18;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
	return (0);
}