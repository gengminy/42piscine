/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:49:20 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 14:49:21 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	draw_square_on_map(t_map *map, t_square *square)
{
	int	i;
	int	j;

	i = square->y - square->len;
	while (++i <= square->y)
	{
		j = square->x - square->len;
		while (++j <= square->x)
			map->arr[i][j] = map->full;
	}
}

void	print_answer(t_map *map, t_square *square)
{
	int	i;

	draw_square_on_map(map, square);
	i = 0;
	while (i < map->height)
	{
		ft_putstr(map->arr[i]);
		ft_putchar('\n');
		i++;
	}
}
