/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:42:02 by misoares          #+#    #+#             */
/*   Updated: 2024/02/02 20:42:02 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
    // Move dest pointer to the end of the string
    while (*dest != '\0') {
        dest++;
    }
    // Copy characters from src to dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    // Terminate the concatenated string
    *dest = '\0';
}