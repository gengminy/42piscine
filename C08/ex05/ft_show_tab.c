/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:56:02 by knoh              #+#    #+#             */
/*   Updated: 2022/02/14 14:56:03 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_put_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_put_str(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_put_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
