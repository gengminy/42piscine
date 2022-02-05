/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:27:39 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:27:40 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    idx;

	idx = 0;
	while (idx < size && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
    if (idx == size && size != 0)
        dest[idx] = '\0';
	return (idx);	
}