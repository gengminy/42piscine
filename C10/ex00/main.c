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

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_is_arg_valid(int argc)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	 int	file;
	char	buffer[1024];

	if (ft_is_arg_valid(argc))
	{
		file = open(argv[1], O_RDONLY);
		if(file < 0)
			ft_putstr("Cannot read file.\n");
		else
		{
			if (read(file, buffer, 1024) >= 0)
				ft_putstr(buffer);
		}
		close(file);
	}
}
