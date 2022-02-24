/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:46:53 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 21:46:53 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		dest_len;
	unsigned int		src_len;

	dest_len = ft_str_len(dest);
	src_len = ft_str_len(src);
	i = 0;
	if (!dest || !src)
		return (0);
	if (size < dest_len + 1)
		return (src_len + size);
	while (src[i] && dest_len + 1 + i < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
