/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:15:03 by misoares          #+#    #+#             */
/*   Updated: 2024/01/29 13:23:17 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp; // temp variable to store the first value temporarily

	temp = *a; // temp value is swapped to *a 
	*a = *b; // *a value is swapped to *b 
	*b = temp; // *b value is swapped to temp 
}

int main()
{
	int x;
	int y; // declares 2 int variables

	x = 5;
	y = 2; // declare the value of the int variables

	ft_swap(&x, &y); // swaps position of values
	printf("X: %d\n", x); // prints swapped values
	printf("Y: %d\n", y);

	return(0);
}