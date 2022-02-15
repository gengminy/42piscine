/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:26:17 by knoh              #+#    #+#             */
/*   Updated: 2022/02/09 20:26:30 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	len = max - min;
	if (len <= 0)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(len * 4);
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (len);
}
