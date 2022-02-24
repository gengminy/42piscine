/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:43:02 by knoh              #+#    #+#             */
/*   Updated: 2022/02/12 18:43:03 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_row_left_count(int row_idx, char *map)
{
	 int	i;
	 int	count;
	char	max;

	max = '0';
	count = 0;
	i = row_idx * 4;
	while (i < row_idx * 4 + 4)
	{
		if (map[i] != '0' && max < map[i])
		{
			max = map[i];
			count++;
		}
		i ++;
	}
	return (count);
}

int	ft_get_row_right_count(int row_idx, char *map)
{
	 int	i;
	 int	count;
	char	max;

	max = '0';
	count = 0;
	i = row_idx * 4 + 3;
	while (i >= row_idx * 4)
	{
		if (map[i] != '0' && max < map[i])
		{
			max = map[i];
			count++;
		}
		i --;
	}
	return (count);
}

int	ft_get_col_up_count(int col_idx, char *map)
{
	 int	i;
	 int	count;
	char	max;

	max = '0';
	count = 0;
	i = col_idx;
	while (i < 16)
	{
		if (map[i] != '0' && max < map[i])
		{
			max = map[i];
			count++;
		}
		i += 4;
	}
	return (count);
}

int	ft_get_col_down_count(int col_idx, char *map)
{
	 int	i;
	 int	count;
	char	max;

	max = '0';
	count = 0;
	i = col_idx + 12;
	while (i >= 0)
	{
		if (map[i] != '0' && max < map[i])
		{
			max = map[i];
			count++;
		}
		i -= 4;
	}
	return (count);
}

int	ft_is_valid(int depth, char *map, char *input, int strict)
{
	int	c_up;
	int	c_down;
	int	r_left;
	int	r_right;

	c_up = depth % 4;
	c_down = depth % 4 + 4;
	r_left = depth / 4 + 8;
	r_right = depth / 4 + 12;
	if (!strict
		&& (ft_get_col_up_count(depth % 4, map) > input[c_up] - '0'
			|| ft_get_col_down_count(depth % 4, map) > input[c_down] - '0'
			|| ft_get_row_left_count(depth / 4, map) > input[r_left] - '0'
			|| ft_get_row_right_count(depth / 4, map) > input[r_right] - '0'))
		return (0);
	if (strict
		&& (ft_get_col_up_count(depth % 4, map) != input[c_up] - '0'
			|| ft_get_col_down_count(depth % 4, map) != input[c_down] - '0'
			|| ft_get_row_left_count(depth / 4, map) != input[r_left] - '0'
			|| ft_get_row_right_count(depth / 4, map) != input[r_right] - '0'))
		return (0);
	return (1);
}
