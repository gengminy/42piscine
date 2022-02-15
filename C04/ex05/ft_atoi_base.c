/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:23:22 by knoh              #+#    #+#             */
/*   Updated: 2022/02/08 13:23:24 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_find_number_str(char *str)
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
	while (*str)
	{
		if (*str == '-' || *str == '+')
			str++;
		else
			break ;
	}
	return (str);
}

int	ft_get_radix(char *base)
{
	char	*cmp;
	int		i;

	i = 0;
	while (base[i])
	{
		cmp = &base[i];
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == '\t' || base[i] == '\n' || base[i] == '\v')
			return (0);
		if (base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
			return (0);
		while (*(cmp++))
			if (*cmp == base[i])
				return (0);
		i++;
	}
	return (i);
}

int	ft_find_operator(char *str)
{
	int	negative;

	negative = 1;
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\v')
			str++;
		else if (*str == '\f' || *str == '\r' || *str == ' ')
			str++;
		else
			break ;
	}
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

int	ft_atoi_base(char *str, char *base)
{
	int		negative;
	int		radix;
	int		result;
	int		cur_number;
	char	*cmp;

	result = 0;
	radix = ft_get_radix(base);
	cmp = str;
	negative = ft_find_operator(cmp);
	cmp = ft_find_number_str(cmp);
	if (radix < 2)
		return (0);
	while (*cmp)
	{
		cur_number = ft_get_number(*cmp, base);
		if (cur_number == -1)
			break ;
		result *= radix;
		result += cur_number * negative;
		cmp++;
	}
	return (result);
}
