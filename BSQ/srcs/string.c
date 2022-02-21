/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:49:30 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 14:49:31 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_strncpy(char *dst, char *src, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!is_char_printable(src[i]))
			return (0);
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (1);
}

int	ft_atoi(char *str)
{
	int	num;

	if (*str == '0')
		return (0);
	num = 0;
	while (*str)
	{
		if (!is_number(*str))
			return (0);
		num *= 10;
		num += (*str - '0');
		++str;
	}
	return (num);
}
