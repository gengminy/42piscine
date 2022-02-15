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
#include <fcntl.h>

#include <stdio.h>

int	ft_is_arg_valid(int argc);

int	main(int argc, char *argv[])
{
	 int	file;
	 int	length;
	char	buffer[1024];

	if (ft_is_arg_valid(argc))
	{
		file = open(argv[1], O_RDONLY);
		printf("file: %d\n", file);
		if(file < 0)
			write(1, "Cannot read file.\n", 18);
		else
		{
			read(file, buffer, length);
		}
		close(file);
	}
}
