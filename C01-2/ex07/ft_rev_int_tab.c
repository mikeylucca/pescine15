/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:46:18 by analmeid          #+#    #+#             */
/*   Updated: 2024/01/28 12:35:48 by analmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	i = 0;
	while (i < (size / 2))
	{
		rev = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = rev;
		i++;
	}
}
/*int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
