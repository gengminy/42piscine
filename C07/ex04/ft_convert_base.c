/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:11:08 by knoh              #+#    #+#             */
/*   Updated: 2022/02/10 16:11:09 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *nbr, char *base, int radix);

int	ft_get_radix(char *base)
{
	char	*cmp;
	int		i;

	i = 0;
	while (base[i])
	{
		cmp = &base[i];
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
			return (0);
		while (*(cmp++))
			if (*cmp == base[i])
				return (0);
		i++;
	}
	return (i);
}

int	ft_get_decimal_len_by_radix(int nbr, int radix)
{
	int	len;

	len = 1;
	while (nbr / radix != 0)
	{
		if (nbr < 0)
		{
			nbr = -(nbr / radix);
			len += 2;
		}
		else
		{
			nbr = nbr / radix;
			len++;
		}
	}
	return (len);
}

char	*ft_get_converted_number(int decimal, int radix, char *base_to)
{
	 int	size;
	 int	begin;
	char	*buffer;

	size = ft_get_decimal_len_by_radix(decimal, radix);
	buffer = (char *)malloc(size + 1);
	if (!buffer)
		return (0);
	buffer[size] = '\0';
	if (decimal < 0)
	{
		buffer[0] = '-';
		buffer[--size] = base_to[-(decimal % radix)];
		decimal = -(decimal / radix);
		begin = 1;
	}
	else
		begin = 0;
	while (begin < size)
	{
		buffer[--size] = base_to[decimal % radix];
		decimal /= radix;
	}
	return (buffer);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	 int	decimal;
	 int	radix_to;
	 int	radix_from;

	radix_from = ft_get_radix(base_from);
	radix_to = ft_get_radix(base_to);
	if (radix_from < 2 || radix_to < 2)
		return (0);
	decimal = ft_atoi_base(nbr, base_from, radix_from);
	return (ft_get_converted_number(decimal, radix_to, base_to));
}
