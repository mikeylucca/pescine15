/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:08:37 by misoares          #+#    #+#             */
/*   Updated: 2024/01/29 16:50:11 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1) // iterates through the array and makes sure that no out of bounds accesses are done when comparing the elements
		{
			if (tab[i] > tab[i + 1]) // if the current value is greater than the next value
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp; // swaps them
			}
			i++; // increments i
		}
		size--; // decrements size by 1 
	}
}

/*int	main(void)
{
	int tab[5] = {5, 7, 3, 8, 2};
	int size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/