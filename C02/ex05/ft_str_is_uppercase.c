/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:24:13 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:24:15 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ('A' > str[idx] || str[idx] > 'Z')
			return (0);
		idx++;
	}
	return (1);
}
