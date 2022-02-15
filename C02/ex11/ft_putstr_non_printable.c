/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:27:49 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:28:17 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int c)
{
	char	div;
	char	mod;

	div = c / 16;
	mod = c % 16;
	if (div >= 10)
		div = div - 10 + 'a';
	else
		div += '0';
	if (mod >= 10)
		mod = mod - 10 + 'a';
	else
		mod += '0';
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				idx;
	unsigned char	ch;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (32 <= str[idx] && str[idx] < 127)
			write(1, &str[idx], 1);
		else
		{
			ch = str[idx];
			write(1, "\\", 1);
			ft_print_hex(ch);
		}
		idx++;
	}
}
