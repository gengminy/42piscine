/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:45:38 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 15:45:39 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	saved;

	left = 0;
	while (left < size / 2)
	{
		right = size - 1 - left;
		saved = tab[left];
		tab[left] = tab[right];
		tab[right] = saved;
		left++;
	}
}
