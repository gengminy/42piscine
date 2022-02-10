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

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_compare_str(char *str, char *find)
{
	int i;

	i = 0;		
	while (str[i] && find[i])
	{
		if(str[i] != find[i])
			return (0);
		i++;
	}
	return (1);
}


int	ft_get_split_length(char *str, char *charset)
{
	int	i;
	int	str_len;
	int charset_len;
	int	count;

	count = 0;
	i = 0;
	str_len = ft_strlen(str);
	charset_len = ft_strlen(charset);
	while (*str)
	{
		if (ft_compare_str(str, charset))
			count++;
		str++;
	}
	return (str_len + 1 - count * charset_len + count + 1);
}

void	ft_strncpy(char *dest, char *src, int n)
{
	int i;

	i = -1;
	while (*src && ++i < n)
		*dest++ = *src++;
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		src_len;
	int		i;
	int		index;
	char	*head;

	i = 0;
	index = 0;
	src_len = ft_strlen(charset);
	strs = (char **)malloc(ft_get_split_length(str, charset));
	head = str;
	while (*str)
	{
		if (ft_compare_str(str, charset))
		{
			strs[i] = (char *)malloc(str - head + 1);
			ft_strncpy(strs[i], head, str - head);
			*str = '\0';
			str += src_len - 1;
		}
		str++;
	}
	return (strs);
}
