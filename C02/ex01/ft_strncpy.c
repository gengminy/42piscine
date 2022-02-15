/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:23:36 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:23:38 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
		idx++;
	return (idx);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;
	unsigned int	len;

	idx = 0;
	len = ft_strlen(src);
	while (idx < n)
	{
		if (idx < len)
			dest[idx] = src[idx];
		else
			dest[idx] = '\0';
		idx++;
	}
	return (dest);
}
