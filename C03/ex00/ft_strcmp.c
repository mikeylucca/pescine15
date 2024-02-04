/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 20:40:29 by misoares          #+#    #+#             */
/*   Updated: 2024/02/02 20:40:29 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	// Loop until both strings are not terminated ('\0') and the characters are equal
    while (*s1 && *s2 && *s1 == *s2) {
        // Move to the next character in both strings
        s1++;
        s2++;
    }
	return (*s1) - (*s2);
}