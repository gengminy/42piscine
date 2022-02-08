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
	unsigned int i;
	unsigned int num;

	num = nb;
	i = 0;
	while (i * i <= num)
	{
		if (i * i == num)
			return (i);
		i++;
	}
	return (0);
}
