/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:37:05 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 11:37:06 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char begin, char mid, char end, int size)
{
	int	idx;

	idx = 1;
	if (idx <= size)
		ft_putchar(begin);
	while (idx < size - 1)
	{
		ft_putchar(mid);
		idx++;
	}
	if (idx < size)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	idx;

	idx = 1;
	if (idx <= y)
		ft_print_line('A', 'B', 'C', x);
	while (idx < y - 1)
	{
		ft_print_line('B', ' ', 'B', x);
		idx++;
	}
	if (idx < y)
		ft_print_line('A', 'B', 'C', x);
}
