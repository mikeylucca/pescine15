/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:13:09 by misoares          #+#    #+#             */
/*   Updated: 2024/02/02 21:13:09 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    if (*to_find == '\0')
    {
        return (str);
    }
    while (*str != '\0') // while the string has not ended
    {
        char *strPtr = str;
        char *toFindPtr = to_find;

        // check if the current character == 1st char in to_find
        while (*toFindPtr != '\0' && *strPtr == *toFindPtr)
        {
            strPtr++;
            toFindPtr++;
        }

        // if the whole tofind str is in str, returns the position
        if (*toFindPtr == '\0')
        {
            return (str);
        }
        str++; // moves to the next char in str
    }
    return (0); // returns 0 if nothing is found.
}