/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:41:56 by knoh              #+#    #+#             */
/*   Updated: 2022/02/09 20:41:56 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	len_src;
	int	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	while (i < len_src)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}

int	ft_get_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	sum;
	int	sep_length;

	sum = 0;
	i = 0;
	sep_length = ft_strlen(sep);
	while (i < size)
	{
		sum += ft_strlen(strs[i]);
		if (i + 1 < size)
			sum += sep_length;
		i++;
	}
	return (sum);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	char	*buffer;

	sum = ft_get_total_size(size, strs, sep);
	buffer = (char *)malloc(sum + 1);
	*buffer = 0;
	i = 0;
	while (i < size)
	{
		buffer = ft_strcat(buffer, strs[i]);
		if (i + 1 < size)
			buffer = ft_strcat(buffer, sep);
		i++;
	}
	return (buffer);
}
