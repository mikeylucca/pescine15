/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analmeid <analmeid@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:26:51 by analmeid          #+#    #+#             */
/*   Updated: 2024/01/28 18:37:46 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str [len] != '\0')
	{
		write (1, &str[len], 1);
		len++;
	}
}

int	main(void)
{
	ft_putstr("42Lisboa");
}
