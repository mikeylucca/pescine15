/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misoares <misoares@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:21:38 by misoares          #+#    #+#             */
/*   Updated: 2024/02/08 14:27:49 by misoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb <= 1)
		return (0);
	while (prime <= (nb / 2))
	{
		if (!(nb % prime == 0))
			return (0);
		else
			prime++;
	}
	return (1);
}