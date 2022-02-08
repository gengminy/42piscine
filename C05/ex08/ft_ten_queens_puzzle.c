/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:29:50 by knoh              #+#    #+#             */
/*   Updated: 2022/02/08 18:29:51 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_abs(int num)
{
	if (num < 0)
		return -num;
	else
		return num;
}

int	ft_is_queen_valid(char *q_row, int depth)
{
	int cmp_col;
	int	cmp_row;
	int row;

	cmp_col = 0;
	while (cmp_col < depth)
	{
		cmp_row = q_row[cmp_col] - '0';
		row = q_row[depth] - '0';
		if (cmp_col == depth || cmp_row == row)
			return (0);
		if (ft_abs(cmp_col - depth) == ft_abs(cmp_row - row))
			return (0);
		cmp_col++;
	}
	return (1);
}

int	ft_track_queen(char *q_row, int depth)
{
	int	count;
	int	cur;

	count = 0;
	cur = 0;
	if (depth == 10)
	{
		write(1, q_row, 10);
		write(1, "\n", 1);
		return (1);
	}
	while (cur < 10)
	{
		q_row[depth] = cur + '0';		
		if (ft_is_queen_valid(q_row, depth))
			count += ft_track_queen(q_row, depth + 1);
		cur++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	char q_row[11];
	int	count;

	count = 0;
	count += ft_track_queen(q_row, 0);
	return (count);
}

int main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
}
