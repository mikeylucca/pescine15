/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 21:31:49 by misoares          #+#    #+#             */
/*   Updated: 2024/02/09 21:49:06 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc > 0)
    {
        write(1, argv[0], ft_strlen(argv[0]));
        write(1, "\n", 1);
    }
}
