/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:01:57 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 13:01:58 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hexdump.h"

int g_flag;
int	g_bad_fd;

void	hexdump_stdin(t_hexdump_file *hf)
{
	while (read(0, &hf->buffer[(hf->file_len) % 16], 1))
	{
		if (hf->file_len % 16 == 15)
		{
			print_hexdump(hf);
			free(hf->buffer);
			hf->buffer = malloc_with_null_init(17);
			hf->offset += 16;
		}
		(hf->file_len)++;
	}
}

void	hexdump(t_hexdump_file *hf, int fd)
{
	while (read(fd, &hf->buffer[(hf->file_len) % 16], 1))
	{
		g_bad_fd = 1;
		if (errno)
		{
			print_error(hf->filename, hf->program);
			break ;
		}
		if (hf->file_len % 16 == 15)
		{
			print_hexdump(hf);
			free(hf->buffer);
			hf->buffer = malloc_with_null_init(17);
			hf->offset += 16;			
		}
		(hf->file_len)++;
	}
}

void	hexdump_files(t_hexdump_file *hf, int argc, char *argv[])
{
	int	fd;
	int	i;

	i = g_flag;
	while (++i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			print_error(argv[i], argv[0]);
		else
		{
			set_hf_filename(hf, argv[i], argv[0]);
			hexdump(hf, fd);
		}
	}
	if(!g_bad_fd)
	{
		errno = 9;
		print_error(argv[argc - 1], argv[0]);
	}
}

int	main(int argc, char *argv[])
{
	t_hexdump_file	*hf;

	hf = alloc_hexdump_file();
	if (argc > 1 && is_flag(argv[1]))
		g_flag = 1;
	if (argc == 1 + g_flag)
		hexdump_stdin(hf);
	else
		hexdump_files(hf, argc, argv);
	if (hf->is_printed)
	{
		if ((hf->file_len) % 16 != 0)
		{
			print_hex_index(hf->offset, g_flag, 0); //인덱스 들어오도록
			print_hex_string(hf->buffer, g_flag);
			print_hex_string(hf->buffer + 8, g_flag);
			print_string(hf->buffer, g_flag);
			ft_putchar('\n');			
		}
		print_hex_index(hf->file_len, g_flag, 0);
		ft_putchar('\n');
	}
	free_hf(hf);
	return (0);
}
