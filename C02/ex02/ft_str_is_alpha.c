/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:55:40 by misoares          #+#    #+#             */
/*   Updated: 2024/01/30 20:15:50 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') // while the string has not terminated
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')) // checks if i is < or > than the alphabetical range in ASCII.
		{
			return (0); // Return 0 if any non-alphabetical character is found
		}
	i++;
	}
	return (1); // returns 1 if the previous conditions are not met (is alphabetical)
}

int	main(void)
{
	int is_alpha;
	char a[] = "JustLetters";
	char b[] = "Anything @$$£ Else";
	char c[] = "";

	is_alpha = ft_str_is_alpha(a);
	printf("%d\n", is_alpha);

	is_alpha = ft_str_is_alpha(b);
	printf("%d\n", is_alpha);

	printf("Empty string => %d\n", ft_str_is_alpha(c));
}