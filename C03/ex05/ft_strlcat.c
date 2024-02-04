/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:44:39 by misoares          #+#    #+#             */
/*   Updated: 2024/02/02 21:44:39 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while(dest[i] && i < size) // Find the end of dest or stop at size limit
    {
        i++;
    }
    while(src[i - j] && i + 1 < size)  // Copy characters from src to dest, accounting for the null terminator
    {
        dest[i] = src[i - j];
        i++;
    }
    if (j < size)
    {
        dest[i] = '\0'; // makes sure the new string is terminated
    }
    return (j + ft_strlen(src)); // returns total size of concatenated string
}
