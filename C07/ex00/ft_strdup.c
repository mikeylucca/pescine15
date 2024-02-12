/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:29:26 by misoares          #+#    #+#             */
/*   Updated: 2024/02/12 21:27:58 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while(*str != '\0')
    {
        len++;
    }
    return (len);
}

char *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    dest = malloc(sizeof(char) * ft_strlen(*src) + 1);
    if (!dest)
        return (0);
    while(*src)
    {
        *dest = *src;
        *src++;
    }
    *dest = '\0';
    return (dest);
}