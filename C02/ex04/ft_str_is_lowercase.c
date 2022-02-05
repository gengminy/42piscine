/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:24:02 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:24:06 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ('a' > str[idx] || str[idx] > 'z')
			return (0);
		idx++;
	}
	return (1);
}
