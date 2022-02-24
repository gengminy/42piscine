/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:19:34 by knoh              #+#    #+#             */
/*   Updated: 2022/02/09 20:19:35 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	len = max - min;
	if (len <= 0)
		return (0);
	arr = (int *)malloc(len * 4);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
