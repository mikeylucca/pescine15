/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:36:20 by analmeid          #+#    #+#             */
/*   Updated: 2024/01/28 18:41:29 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sort_swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				sort_swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = sort_swap;
			}
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int tab[5] = {5, 7, 3, 8, 2};
	int size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
