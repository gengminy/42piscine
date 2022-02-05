/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:23:36 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:23:38 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (idx < n)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if(src[idx] == '\0')
		dest[idx] = '\0';
	
	return (dest);
}
