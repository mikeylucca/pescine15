/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:04:58 by analmeid          #+#    #+#             */
/*   Updated: 2024/01/28 11:12:59 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	point_swap;

	point_swap = *a;
	*a = *b;
	*b = point_swap;
}

/*
int	main()
{
	int x;
	int y;

	x = 2;
	y = 4;
	ft_swap(&x, &y);
	printf("%d \n", x);
	printf("%d", y);
}*/
