/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:44:17 by analmeid          #+#    #+#             */
/*   Updated: 2024/01/28 12:35:30 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a;
	int	b;
	int	x;
	int	y;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
}*/
