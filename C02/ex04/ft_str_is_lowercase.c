/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:45:31 by misoares          #+#    #+#             */
/*   Updated: 2024/01/30 19:48:24 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') // while the string has not terminated
	{
		if (str[i] < 'a' || str[i] > 'z') // checks if i is < or > than the lowercase alphabet character range in ASCII.
		{
			return (0); // Return 0 if any non-alphabetical character is found
		}
	i++;
	}
	return (1);
}