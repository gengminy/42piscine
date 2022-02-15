/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:32:17 by knoh              #+#    #+#             */
/*   Updated: 2022/02/08 17:32:17 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprime(int nb)
{
	unsigned int	i;
	unsigned int	num;

	num = nb;
	if (num <= 1)
		return (0);
	if (num == 2 || num == 3)
		return (1);
	if (num % 2 == 0 || num % 3 == 0)
		return (0);
	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	unsigned int	i;

	i = nb;
	if (nb <= 2)
		return (2);
	while (!ft_isprime(i))
		i++;
	return (i);
}
