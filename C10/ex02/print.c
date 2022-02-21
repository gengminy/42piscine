/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:36:41 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 13:36:43 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

void	print_error(char *filename, char *program)
{
	ft_putstr(basename(program));
	ft_putstr(": ");
	ft_putstr(filename);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

void	print_filename(char *filename, int i)
{
	if (i != 3)
		ft_putstr("\n");
	ft_putstr("==> ");
	ft_putstr(filename);
	ft_putstr(" <==");
	ft_putstr("\n");
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (result);
}
