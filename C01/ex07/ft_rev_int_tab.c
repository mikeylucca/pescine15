/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:57:21 by misoares          #+#    #+#             */
/*   Updated: 2024/01/29 16:06:36 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int rev;

	start = 0;
	while (start != (size / 2)) // loop continues until half of the elements in the array.
	{
		rev = tab[start]; // stores the value of the element at the current start position in variable rev
		tab[start] = tab[size - start - 1]; // replaces the value at start with the value at the corresponding position from the end of the array 
		tab[size - start - 1] = rev; // sets the value at the end of the array to the stored value (rev), swapping them.
		start++;
	}
}
int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}