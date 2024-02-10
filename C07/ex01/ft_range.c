/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:36:48 by misoares          #+#    #+#             */
/*   Updated: 2024/02/10 22:17:18 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int	diff;
	int	*buff;
	int	count;

    if (min >= max)
        return (0);
    diff = max - min;
    buff = malloc(sizeof(int) * diff);
    if (!buff)
        return (0);
    count = - 1;
    while(++count < diff)
    {
        buff[count] = min + count;
    }
    return(buff);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 1000000000;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
    printf("\n");
}