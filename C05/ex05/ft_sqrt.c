/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:14:04 by knoh              #+#    #+#             */
/*   Updated: 2022/02/08 17:14:05 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	num;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	num = nb;
	i = 1;
	while (i * i <= num)
	{
		if (i * i == num)
			return (i);
		i++;
	}
	return (0);
}
