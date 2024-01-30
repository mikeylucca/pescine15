/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 21:05:55 by misoares          #+#    #+#             */
/*   Updated: 2024/01/30 21:31:29 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}


/*#include <stdio.h>

int	main(void)
{
	char str[] = "FDJSFDSJabc329ABC*&^xyz";

	printf("string before function > %s\n", str);
	
	ft_strlowcase(str);
	printf("string after function > %s\n", str);
	return (0);
}*/