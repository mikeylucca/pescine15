/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:22:54 by misoares          #+#    #+#             */
/*   Updated: 2024/02/11 18:24:45 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int diff;
	int *buff;
	int count;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	buff = malloc(sizeof(int) * diff);
	if (!buff)
	{
		*range = 0;
		return (0);
	}
	*range = buff;
	count = 0;
	while (count < diff)
	{
		buff[count] = min - count;
		count++;
	}
	return (diff);
}
