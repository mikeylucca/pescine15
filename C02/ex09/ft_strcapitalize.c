/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:40:11 by misoares          #+#    #+#             */
/*   Updated: 2024/01/30 21:59:48 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	makeLowerCase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if ((str[l] >= 'A' && str[l] <= 'Z'))
		{
			*(str + l) = *(str + l) + 32;
			l++;
		}
		else
			l++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	makeLowerCase(str);
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z') || (str[i - 1] >= '0' && str[i - 1] <= '9'))
				i++;
			else
			{
				*(str + i) = *(str + i) - 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}


/*int	main(void)
{
	char	x[] = ("salut, comment tu vas ? 42mots quarante-deUx; cinquante+et+un");

	printf("%s", ft_strcapitalize(x));
	return (0);
}*/



/*
    (str[i - 1] >= 'a' && str[i - 1] <= 'z'): Checks if the previous character is a lowercase letter.
    (str[i - 1] >= 'A' && str[i - 1] <= 'Z'): Checks if the previous character is an uppercase letter.
    (str[i - 1] >= '0' && str[i - 1] <= '9'): Checks if the previous character is a digit.
*/