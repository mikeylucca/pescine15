/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:04:54 by misoares          #+#    #+#             */
/*   Updated: 2024/01/31 20:12:26 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *src) // counts the lenght of the string.
{
	int	len;

	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		len;
	int		srclen;

	srclen = ft_strlen(src);
	len = 0;
	while (*src != '\0' && size > 1)
	{
		*dest++ = *src++;
		size--; // decrements remaining size to make sure it only prints the amount given by size
		len++;
	}
	*dest = '\0';
	return (srclen);
}

/*#include <stdio.h>

int	main(void)
{
	char src[10] = "123456789";
	char dest[5];
	int a;

	printf("Before function\nSource = %s\nDestination = %s\n\n", src, dest);

	a = ft_strlcpy(dest, src, 5);
	printf("After function\nSource = %s\nDestination = %s\n", src, dest);
	printf("Source length = %d\n", a);
}*/