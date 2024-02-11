/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:36:46 by misoares          #+#    #+#             */
/*   Updated: 2024/02/11 21:54:10 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] = '\0')
	{
		i++;
	}
	return (i);
}

// create another function that will iterate through each string then call for strlen to count the size of each one.

char *ft_strjoin(const char *s1, const char *s2)
{
	char *buffer;
	int i;
	int j;

	i = 0;
	j = 0;
	*buffer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!*buffer)
		return (NULL);
	while (s1[i])
	{
		buffer[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		buffer[j++] = s2[i];
	}
	buffer[j] = 0;

	return (buffer);
}