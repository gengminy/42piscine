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

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
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

void	display_file(int fd, char *filename, char *program)
{
	unsigned char	buffer;

	while (read(fd, &buffer, 1))
	{
		if (errno)
		{
			print_error(filename, program);
			return ;
		}
		write(1, &buffer, 1);
	}
}

int	main(int argc, char *argv[])
{
	int	fd;
	int	i;

	if (argc == 1)
		display_file(0, 0, argv[0]);
	else
	{
		i = 0;
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				print_error(argv[i], argv[0]);
			else
			{
				display_file(fd, argv[i], argv[0]);
				close(fd);
			}
		}
	}
	return (0);
}
