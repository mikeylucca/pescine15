/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:26:40 by misoares          #+#    #+#             */
/*   Updated: 2024/01/30 19:46:29 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0') // while the string has not terminated
	{
		if (str[i] < '0' || str[i] > '9') // checks if i is < or > than the numeric character range in ASCII.
		{
			return (0); // Return 0 if any non-numeric character is found
		}
	i++;
	}
	return (1);
}