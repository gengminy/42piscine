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
#include <stdio.h>

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

int	ft_get_number(char ch, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (ch == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base, int radix)
{
	char	*head;
	int		negative;
	int		result;
	int		cur_number;

	if (radix < 2)
		return (0);
	head = nbr;
	negative = 1;
	result = 0;
	while (*head == '\t' || *head == '\n' || *head == '\v'
		|| *head == '\f' || *head == '\r' || *head == ' ')
		head++;
	while (*head == '+' || *head == '-')
		if (*(head++) == '-')
			negative = -negative;
	while (*head)
	{
		cur_number = ft_get_number(*head, base);
		if (cur_number < 0)
			break ;
		result = (result * radix) + (negative * cur_number);
		head++;
	}
	return (result);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*buffer;
	int		decimal;
	int		i;
	int		size;
	int		radix_to;

	radix_to = ft_get_radix(base_to);
	if (ft_get_radix(base_from) < 2 || radix_to < 2)
		return (0);
	decimal = ft_atoi_base(nbr, base_from, ft_get_radix(base_from));
	size = ft_get_decimal_len_by_radix(decimal, radix_to);
	buffer = (char *)malloc(size + 1);
	i = 0;
	if (decimal < 0)
	{
		i = 1;
		buffer[0] = '-';
		buffer[--size] = base_to[-(decimal % radix_to)];
		decimal = -(decimal / radix_to);
	}	
	while (size > i)
	{
		buffer[--size] = base_to[decimal % radix_to];
		decimal /= radix_to;
	}
	return (buffer);
}

int main(void)
{
	//char a[] = "!";
	//char b[] = "!@#$";
	//char c[] = "012";

	char a[] = "-10";
	char b[] = "0123456789abcdef";
	char c[] = "0123456789";
	char *d = ft_convert_base(a,b,c);
	printf("%s\n", d);
}