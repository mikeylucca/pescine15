/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 22:42:45 by misoares          #+#    #+#             */
/*   Updated: 2024/02/02 22:42:45 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sinal;
	int	num;

	sinal = 1;
	num = 0;

    // skips any leading white space characters
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-') // if - is found
			sinal *= -1; // variable is multiplied by -1 indicating nega.
		str++;
	}
	while (*str >= '0' && *str <= '9') // converts the digits to nums.
	{
		num = (num * 10) + (*str - 48); // character conversion formula
		str++;
	}
	return (num * sinal);
}

#include <stdio.h>

int main(void)
{
	char *s = "   ---+--+01234506789ab567";
	printf("%d\n", ft_atoi(s));
}