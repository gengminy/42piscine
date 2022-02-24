/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:28:26 by knoh              #+#    #+#             */
/*   Updated: 2022/02/05 18:28:51 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hex(long long number, int depth)
{
	int	i;

	if (number / 16 != 0)
		ft_put_hex(number / 16, depth + 1);
	else
	{
		i = 0;
		while (++i < 16 - depth)
			write(1, "0", 1);
	}
	write(1, &"0123456789abcedf"[number % 16], 1);
}

void	ft_print_memory_addr(char *addr)
{
	long long	addr_val;

	addr_val = (long long)addr;
	ft_put_hex(addr_val, 0);
	write(1, ": ", 2);
}

void	ft_print_str_at(char *addr, int begin, int end)
{
	while (begin < end)
	{
		if (32 <= addr[begin] && addr[begin] < 127)
			write(1, &addr[begin], 1);
		else
			write(1, ".", 1);
		begin++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*cur_addr;

	cur_addr = (char *)addr;
	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
			ft_print_memory_addr(&cur_addr[i]);
		write(1, &"0123456789abcdef"[(unsigned char)cur_addr[i] / 16], 1);
		write(1, &"0123456789abcdef"[(unsigned char)cur_addr[i] % 16], 1);
		if (i % 2 == 1)
			write(1, " ", 1);
		if (i % 16 == 15)
			ft_print_str_at(cur_addr, i - 15, i + 1);
		i++;
	}
	while (i % 16 != 0)
	{
		write(1, "  ", 2);
		if (i++ % 2 == 1)
			write(1, " ", 1);
	}
	ft_print_str_at(cur_addr, size - size % 16, size);
	return (addr);
}
