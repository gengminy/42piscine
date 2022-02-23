/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:33:20 by knoh              #+#    #+#             */
/*   Updated: 2022/02/23 15:33:21 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

int	is_char_printable(unsigned char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

int	is_flag(char *str)
{
	if (str[0] == '-' && str[1] == 'C')
		return (1);
	return (0);
}

int	is_str_equal(char *c1, char *c2)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (c1[i] != c2[i])
			return (0);
		i++;
	}
	return (1);
}
