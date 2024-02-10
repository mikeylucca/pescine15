/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:26:57 by misoares          #+#    #+#             */
/*   Updated: 2024/02/10 21:25:46 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1) - (*s2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char *argv[])
{
	int	param;
	int	count;

	param = 1;
	if (argc == 1)
		return (0);
	count = 0;
	while (param < argc - 1)
	{
		while (count < argc - 1)
		{
			if (ft_strcmp(argv[count], argv[count + 1]) > 0)
				ft_swap(&argv[count], &argv[count + 1]);
			count++;
		}
		param++;
	}
	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		write(1, "\n", 1);
		count++;
	}
	return (0);
}
