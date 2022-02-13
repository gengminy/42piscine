/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:53:40 by knoh              #+#    #+#             */
/*   Updated: 2022/02/10 19:53:41 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_is_charset(char ch, char *charset)
{
	while (*charset)
	{
		if (ch == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (!ft_is_charset(*str, charset))
		{
			count++;
			while (!ft_is_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (count);
}

void	ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = -1;
	while (*src && ++i < n)
		*(dest++) = *(src++);
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	char	*p;

	i = 0;
	result = (char **)malloc(sizeof(char *) * ft_count_words(str, charset) + 1);
	while (*str)
	{
		if (!ft_is_charset(*str, charset))
		{
			p = str;
			while (*str && !ft_is_charset(*str, charset))
				str++;
			result[i] = (char *)malloc(str - p + 1);
			ft_strncpy(result[i], p, str - p);
			i++;
		}
		else
			str++;
	}
	result[i] = 0;
	return (result);
}
