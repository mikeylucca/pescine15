/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:52:01 by misoares          #+#    #+#             */
/*   Updated: 2024/02/02 20:52:01 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j; // unsigned ints because the amount cannot be negative

    i = 0;
    j = 0;
    while (*dest != '\0')
    {
        i++;
    }
    while (*src != '\0' && nb > 0) // while src has not terminated and there is still space left
    {
        *dest = *src; // copies the current caracter
        dest++; // goes to the next position on dest
        src++; // goes to the next character
        nb--; // reduces remaining size by 1
    }
    *dest = '\0';
}