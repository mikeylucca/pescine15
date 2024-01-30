/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:08:45 by misoares          #+#    #+#             */
/*   Updated: 2024/01/30 16:53:09 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n) // n represents the max characters to be copied from src
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0') // transfer the characters from src to dest while i < n or the null terminator is found.
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n) // fills the remaining spaces in the destination with null terminators.
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// unsigned means that it is a non negative integer.
