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

#include "tail.h"

int	g_multi_file;

void	tail(int fd, int length)
{
	char	*buffer;
	 int	i;
	 int	pivot;

	i = 0;
	buffer = (char *)malloc(length);
	if (length == 0)
	{
		while (read(fd, buffer, 1))
			if (errno)
				return ;
	}
	else
	{
		while (read(fd, &buffer[(i % length)], 1))
		{
			if (errno)
				return ;
			i++;
		}
		pivot = i % length;
		if (i >= length)
			write(1, buffer + pivot, length - pivot);
		write(1, buffer, pivot);
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	fd;

	if (argc == 3)
		tail(0, ft_atoi(argv[2]));
	else
	{
		i = 2;
		while (++i < argc)
		{
			errno = 0;
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				print_error(argv[i], argv[0]);
			else
			{
				if (argc > 4)
					print_filename(argv[i], i);
				tail(fd, ft_atoi(argv[2]));
				close(fd);
			}
		}
	}
	return (0);
}
