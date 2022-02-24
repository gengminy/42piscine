/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:48:59 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 14:49:00 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	*safe_malloc(int size)
{
	void	*p;

	p = malloc(size);
	if (!p)
		exit(0);
	return (p);
}

int	free_map_info(t_map *map, char *info)
{
	if (map)
		free(map);
	free(info);
	return (0);
}

void	free_map(t_map *map, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		free(map->arr[i]);
	free(map->arr);
	free(map);
}
