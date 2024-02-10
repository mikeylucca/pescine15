/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:12:27 by misoares          #+#    #+#             */
/*   Updated: 2024/02/09 22:24:47 by misoares         ###   ########.fr       */
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
    int arg;

    arg = argc - 1;
    while(arg > 0)
    {
        write(1, argv[arg], ft_strlen(argv[arg]));
        write(1, "\n", 1);
        arg--;
    }
    return (0);
}