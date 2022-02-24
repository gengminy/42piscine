/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:49:25 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 14:49:25 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**map_dp_init(t_map *map)
{
	int	i;
	int	j;
	int	**buffer;

	buffer = (int **)safe_malloc(sizeof(int *) * (map->height));
	i = -1;
	while (++i < map->height)
	{
		buffer[i] = (int *)safe_malloc(sizeof(int) * (map->width));
		j = -1;
		while (++j < map->width)
		{
			if (map->arr[i][j] == map->obstacle)
				buffer[i][j] = 0;
			else
				buffer[i][j] = 1;
		}
	}
	return (buffer);
}

void	set_square(t_square *square, int x, int y, int len)
{
	square->x = x;
	square->y = y;
	square->len = len;
}

int	check_square(int i, int j, int **dp)
{
	int	min;
	int	top;
	int	top_left;
	int	left;

	top = dp[i - 1][j];
	top_left = dp[i - 1][j - 1];
	left = dp[i][j - 1];
	min = get_min(top, top_left, left);
	dp[i][j] = min + 1;
	return (min + 1);
}

void	find_square_dp(t_map *map, t_square *square, int **dp)
{
	int	y;
	int	x;
	int	len;

	y = -1;
	while (++y < map->height)
	{
		x = -1;
		while (++x < map->width)
		{
			if (y == 0 || x == 0)
			{
				if (square->len < dp[y][x])
					set_square(square, x, y, dp[y][x]);
				continue ;
			}
			if (dp[y][x] == 1)
			{
				len = check_square(y, x, dp);
				if (square->len < len)
					set_square(square, x, y, len);
			}
		}
	}
}

t_square	*find_square(t_map *map)
{
	int			i;
	int			**dp;
	t_square	*square;

	square = (t_square *)safe_malloc(sizeof(t_square));
	dp = map_dp_init(map);
	set_square(square, -1, -1, 0);
	find_square_dp(map, square, dp);
	i = 0;
	while (i < map->height)
		free(dp[i++]);
	free(dp);
	return (square);
}
