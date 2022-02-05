/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:59:29 by knoh              #+#    #+#             */
/*   Updated: 2022/02/03 18:27:55 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_two_integer(int number)
{
	char	first;
	char	second;

	first = (number / 10) + '0';
	second = (number % 10) + '0';
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left < 99)
	{
		right = left + 1;
		while (right < 100)
		{
			ft_print_two_integer(left);
			write(1, " ", 1);
			ft_print_two_integer(right);
			if (left + right < 98 + 99)
			{
				write(1, ", ", 2);
			}
			right++;
		}
		left++;
	}
}
