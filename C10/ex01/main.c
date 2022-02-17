/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:12:52 by knoh              #+#    #+#             */
/*   Updated: 2022/02/15 14:12:53 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>

#define BUFFER_SIZE 1

char	*g_program;

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_err_msg(char *file)
{
	ft_putstr(basename(g_program));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

void	display_file(int fd, char *file)
{
	int				size;
	unsigned char	buffer[BUFFER_SIZE];

	while (1)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (errno)
		{
			print_err_msg(file);
			return ;
		}
		if (size == 0)
			return ;
		write(1, buffer, size);
	}
}

int	main(int argc, char *argv[])
{
	int	fd;
	int	i;

	g_program = argv[0];
	if (argc == 1)
		display_file(0, 0);
	else
	{
		i = 0;
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				print_err_msg(argv[i]);
			else
			{
				display_file(fd, argv[i]);
				close(fd);
			}
		}
	}
	return (0);
}
