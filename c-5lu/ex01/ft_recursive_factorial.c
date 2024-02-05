/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:30:27 by lualbuqu          #+#    #+#             */
/*   Updated: 2024/02/01 15:06:28 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
		result *= nb * ft_recursive_factorial(nb - 1);
	if (nb < 0)
		return (0);
	return (result);
}

int	main(void)
{
	printf("%i", ft_recursive_factorial(3));
}
