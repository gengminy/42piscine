/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:46:32 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 21:46:33 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strllen(char *str)
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

	len_dest = ft_strllen(dest);
	len_src = ft_strllen(src);
	i = 0;
	while (i < len_src)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
