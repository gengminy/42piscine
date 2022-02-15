/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:04:28 by knoh              #+#    #+#             */
/*   Updated: 2022/02/07 19:04:29 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_radix_valid(char *base)
{
	char	*cmp;
	 int	radix;

	radix = ft_strlen(base);
	if (radix < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		cmp = base + 1;
		while (*cmp)
		{
			if (*cmp == *base)
				return (0);
			cmp++;
		}
		base++;
	}
	return (1);
}

void	ft_print_numbers(int nbr, char *base, int radix)
{
	int	cur_num;

	if (nbr < 0)
	{
		write(1, "-", 1);
		cur_num = -(nbr % radix);
		if (nbr / radix != 0)
			ft_print_numbers(-(nbr / radix), base, radix);
	}
	else if (nbr / radix == 0)
		cur_num = nbr;
	else
	{
		cur_num = nbr % radix;
		ft_print_numbers(nbr / radix, base, radix);
	}
	write(1, &base[cur_num], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	radix = ft_strlen(base);
	if (ft_is_radix_valid(base))
		ft_print_numbers(nbr, base, radix);
}
