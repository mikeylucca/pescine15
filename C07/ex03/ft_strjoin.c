/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:36:46 by misoares          #+#    #+#             */
/*   Updated: 2024/02/12 20:35:10 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

int ft_len(char **strs, int size, char *sep) // loops through each string in the strs array.
{
	int i;
	int len;

	i = 0;
	len = - 1;
	while (++i < size)
		len += ft_strlen(strs[i]); // calculates the length
	len = len + (size - 1) * ft_strlen(sep) + 1; // calculates the total amount of strni
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    char *str;

    if (size == 0)
    {
        str = malloc(sizeof(char));
        *str = 0;
        return (str);
    }
    if (!(str = malloc(sizeof(char) * ft_len(strs, size, sep) + 1)))
        return (NULL);
    *str = 0;
    i = 0;
    while (i < size)
    {
        ft_strcat(str, strs[i]);
        if (i < size - 1)
        {
            ft_strcat(str, sep);
        }
        i++;
    }
    return (str);
}

int main(int argc, char *argv[])
{
	char *separator = " ";
	char *joined_string = ft_strjoin((argc - 1), &argv[1], separator);

	printf("Concatenated string: %s\n", joined_string);
	
	free(joined_string);
	return (0);
}
