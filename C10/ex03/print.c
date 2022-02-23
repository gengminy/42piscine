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

#include "hexdump.h"

void	print_hexdump(t_hexdump_file *hf)
{
	hf->is_printed = 1;
    if (is_str_equal(hf->prev, hf->buffer))
    {
        if (!(hf->duplicated))
            ft_putstr("*\n");
        hf->duplicated = 1;
        return ;
    }
    hf->duplicated = 0;
    print_hex_index(hf->offset, g_flag, 0); //인덱스 들어오도록
    print_hex_string(hf->buffer, g_flag);
    print_hex_string(hf->buffer + 8, g_flag);
    print_string(hf->buffer, g_flag);
    ft_strncpy(hf->prev, hf->buffer, 16);
    ft_putchar('\n');
}

void	print_hex_index(int index, int flag, int depth)
{
	if (depth == 7 + flag)
	   return ;
	print_hex_index(index / 16, flag, depth + 1);
	ft_putchar("0123456789abcdef"[index % 16]);
}

void	print_hex_string(char *str, int flag)
{
	int	i;

	if (flag)
		ft_putchar(' ');
	i = 0;
	while (str[i] && i < 8)
	{
		ft_putchar(' ');
		ft_putchar("0123456789abcdef"[(unsigned char)str[i] / 16]);
		ft_putchar("0123456789abcdef"[(unsigned char)str[i] % 16]);
		i++;
	}
	while (i++ < 8)
		ft_putstr("   ");
}

void	print_string(char *str, int flag)
{
	int i;

	if (!flag)
		return ;
	ft_putstr("  |");
	i = 0;
	while (str[i] && i < 16)
	{
		if (is_char_printable(str[i]))
			ft_putchar(str[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putchar('|');
}

void	print_error(char *filename, char *program)
{
	ft_putstr(basename(program));
	ft_putstr(": ");
	ft_putstr(filename);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
    errno = 0;
}
