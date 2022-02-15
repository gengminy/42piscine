/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:35:37 by knoh              #+#    #+#             */
/*   Updated: 2022/02/15 15:35:38 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;
	int	is_uprising;

	i = 0;
	j = 0;
	is_uprising = 0;
	if (length > 0 && tab[i] < tab[length - 1])
		is_uprising = 1;
	else if (length > 0 && tab[i] > tab[length - 1])
		is_uprising = -1;
	while (i < length - 1)
	{
		j = i;
		while (j < length - i - 1)
		{
			if (f(tab[j], tab[j + 1]) > 0 && is_uprising > 0)
				return (0);
			else if (f(tab[j], tab[j + 1]) < 0 && is_uprising < 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
