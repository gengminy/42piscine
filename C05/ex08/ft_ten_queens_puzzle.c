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

char g_queen_row[10];

int	ft_abs(int num)
{
	if (num < 0)
		return -num;
	else
		return num;
}

int	ft_is_valid(int col1, int row1, int col2, int row2)
{
	if (col1 == col2 || row1 == row2)
		return (0);
	if (ft_abs(col2 - col1) == ft_abs(row2 - row1))
		return (0);
	return (1);
}

void	ft_track_queen(char prev, int cur_depth, int depth)
{

}

int	ft_ten_queens_puzzle(void)
{
	char cur;

	cur = '0';
	while (cur <= '9')
	{
		g_queen_row[cur - '0'] = cur;
	}
}