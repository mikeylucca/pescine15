/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:34:46 by misoares          #+#    #+#             */
/*   Updated: 2024/01/29 14:30:51 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0') // while the string has not ended - uses null terminator '\0' to determine if the string has ended
	{
		len++; // increments 
	}
	write(1, str, len);
}

int main(void)
{
	ft_putstr("Teste String\n");
	return (0);
}