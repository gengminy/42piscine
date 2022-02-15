/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:55:39 by knoh              #+#    #+#             */
/*   Updated: 2022/02/15 18:55:40 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"

int	ft_operate(int a, char op, int b)
{
	if (op == '+')
		return (add(a, b));
	if (op == '-')
		return (sub(a, b));
	if (op == '*')
		return (mul(a, b));
	if (op == '/')
		return (div(a, b));
	if (op == '%')
		return (rem(a, b));
	return (0);
}

int	main(int argc, char *argv[])
{
	 int	a;
	 int	b;
	char	op;

	if (argc == 4)
	{	
		if (!ft_is_valid_op(argv[2]))
			write(1, "0\n", 2);
		else
		{
			a = ft_atoi(argv[1]);
			op = *argv[2];
			b = ft_atoi(argv[3]);
			if (op == '/' && b == 0)
				write(1, "Stop : division by zero\n", 24);
			else if (op == '%' && b == 0)
				write(1, "Stop : modulo by zero\n", 22);
			else
			{
				ft_putnbr(ft_operate(a, op, b));
				write(1, "\n", 1);
			}
		}
	}
}
