/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:49:15 by knoh              #+#    #+#             */
/*   Updated: 2022/02/12 18:49:16 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_valid(int depth, char *map, char *input, int strict);

void	ft_print_answer(char *answer, int size)
{
	int	i;

	i = 0;
	while (answer[i])
	{
		write(1, &answer[i], 1);
		if (i % size == size - 1)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
	}
}

int	ft_is_duplicated(int depth, char *map)
{
	int	col;
	int	row;
	int	i;

	col = depth % 4;
	row = depth / 4 * 4;
	i = 0;
	while (i++ < 4)
	{
		if (col != depth && map[col] != '0' && map[col] == map[depth])
			return (1);
		col += 4;
	}
	i = 0;
	while (i++ < 4)
	{
		if (row != depth && map[row] != '0' && map[row] == map[depth])
			return (1);
		row++;
	}
	return (0);
}

int	ft_is_all_valid(int depth, char *map, char *input)
{
	int	i;

	i = 0;
	while (i < depth)
	{
		if (!ft_is_valid(i, map, input, 1))
			return (0);
		i++;
	}
	return (1);
}

int	ft_track(int depth, char *map, char *input)
{
	char	to_input;
	int		has_answer;

	has_answer = 0;
	if (depth == 16)
	{
		if (!ft_is_all_valid(16, map, input))
			return (0);
		ft_print_answer(map, 4);
		return (1);
	}
	to_input = '1';
	while (to_input <= '4' && !has_answer)
	{
		map[depth] = to_input;
		if (ft_is_valid(depth, map, input, 0) && !ft_is_duplicated(depth, map))
			has_answer = ft_track(depth + 1, map, input);
		map[depth] = '0';
		to_input++;
	}
	return (has_answer);
}
