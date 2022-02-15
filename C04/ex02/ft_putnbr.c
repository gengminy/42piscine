/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:04:22 by knoh              #+#    #+#             */
/*   Updated: 2022/02/07 17:04:23 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	cur_number;

	if (nb < 0)
	{
		write(1, "-", 1);
		cur_number = -(nb % 10) + '0';
		if (nb / 10 != 0)
			ft_putnbr(-(nb / 10));
	}
	else if (nb / 10 == 0)
	{
		cur_number = nb + '0';
	}
	else
	{
		cur_number = (nb % 10) + '0';
		ft_putnbr(nb / 10);
	}
	write(1, &cur_number, 1);
}
