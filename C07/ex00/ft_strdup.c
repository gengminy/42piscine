/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:05:24 by knoh              #+#    #+#             */
/*   Updated: 2022/02/09 20:05:25 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*cpy;

	len = 0;
	while (src[len])
		len++;
	cpy = (char *)malloc(len + 1);
	i = -1;
	while (++i < len)
		cpy[i] = src[i];
	cpy[i] = '\0';
	return (cpy);
}
