/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:06:00 by misoares          #+#    #+#             */
/*   Updated: 2024/02/10 22:04:07 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	char src[] = "test";
	char dest[] = "destination";

	printf("Before function\nSource = %s\nDestination = %s\n\n", src, dest);

	ft_strcpy(dest, src);
	printf("After function\nSource = %s\nDestination = %s\n", src, dest);
}
