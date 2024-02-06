/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbnr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:35:50 by misoares          #+#    #+#             */
/*   Updated: 2024/02/06 20:21:19 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_error(char *str)
{
	int	count;
	int	size;
	int	str_cmp;

	size = ft_strlen(str);
	count = 0;
	if (str[count] == '\0' || size == 1)
		return (0);
	while (str[count])
	{
		if (str[count] <= 32 || str[count] == 127 || str[count] == 43
			|| str[count] == 45)
			return (0);
		str_cmp = count + 1;
		while (str_cmp < size)
		{
			if (str[count] == str[str_cmp])
				return (0);
			str_cmp++;
		}
		count++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		error;
	long	num;

	size = ft_strlen(base);
	error = ft_error(base);
	num = nbr; // converts nbr from int to long to allow for more bits.
	if (error == 1)
	{
		if (num < 0)
		{
			ft_putchar('-');
			num *= -1;
		}
		if (num < size)
		{
			ft_putchar(base[num]);
		}
		if (num >= size)
		{
			ft_putnbr_base(num / size, base);
			ft_putnbr_base(num % size, base);
		}
	}
}

#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789ABCDEF");
	printf("\n");

	return (0);
}