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

int	hexdump(int fd, int flag, char *filename, char *program)
{
	 int	i;
	 int	done;
	char	prev[17];
	char	buffer[17];

	flag = 3;
	i = 0;
	done = 0;
	errno = 0;	
	while (read(fd, &buffer[i % 16], 1))
	{
		done = 1;
		if (errno)
		{
			print_error(filename, program);
			break ;
		}
		if (i % 16 == 15)
		{
			print(prev, buffer);			
			ft_strncpy(prev, buffer, 16);
		}
		i++;
		
	}
	return (done);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	fd;
	int	has_flag;

	has_flag = 0;
	if (argc > 1 && is_flag(argv[1]))
		has_flag = 1;
	if (argc == 1 + has_flag)
		; //stdin
	else
	{
		i = has_flag;
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				print_error(argv[i], argv[0]);
			if(!hexdump(fd, has_flag, argv[i], argv[0]))
			{
				errno = 9;
				print_error(argv[argc - 1], argv[0]);	
			}  //hexdump
		}
	}
	return (0);
}
