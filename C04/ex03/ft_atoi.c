/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:04:52 by knoh              #+#    #+#             */
/*   Updated: 2022/02/07 17:04:52 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_remove_blanks(char *str)
{
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\v')
			str++;
		else if (*str == '\f' || *str == '\r' || *str == ' ')
			str++;
		else
			break ;
	}
	return (str);
}

char	*ft_remove_operators(char *str)
{
	while (*str)
	{
		if (*str == '-' || *str == '+')
			str++;
		else
			break ;
	}
	return (str);
}

int	ft_find_operator(char *str)
{
	int	negative;

	negative = 1;
	while (*str)
	{
		if (*str == '-')
			negative = -negative;
		else if (*str == '+')
			;
		else
			break ;
		str++;
	}
	return (negative);
}

int	ft_atoi(char *str)
{
	int		negative;
	int		result;
	char	*cmp;

	result = 0;
	cmp = str;
	cmp = ft_remove_blanks(cmp);
	negative = ft_find_operator(cmp);
	cmp = ft_remove_operators(cmp);
	while (*cmp)
	{
		if ('0' > *cmp || *cmp > '9')
			break ;
		result *= 10;
		if (negative < 0)
			result -= *cmp - '0';
		else
			result += *cmp - '0';
		cmp++;
	}
	return (result);
}
