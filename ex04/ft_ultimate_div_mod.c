/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:52:37 by misoares          #+#    #+#             */
/*   Updated: 2024/01/28 17:53:13 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int temp; // temp variable to store the first value temporarily

	temp = *x; // temp value is swapped to *a 
	*x = *y; // *a value is swapped to *b 
	*y = temp; // *b value is swapped to temp 
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	*div;
	int	*mod;
	int a;
	int b;

	if (b != 0)
	{
		*div = a / b;
		*mod = a % b; 
	}
}