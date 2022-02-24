/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:46:06 by knoh              #+#    #+#             */
/*   Updated: 2022/02/12 18:46:07 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_track(int depth, char *map, char *input);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_split(char *str)
{
	 int	count;
	 int	i;
	char	*result;

	count = 0;
	i = 0;
	result = (char *)malloc(sizeof(char) * 16 + 1);
	if (result == 0)
		return (0);
	while (str[i])
	{
		if (i % 2 == 0 && '1' <= str[i] && str[i] <= '4')
			result[count++] = str[i];
		else if (str[i] != ' ')
			break ;
		i++;
	}
	result[count] = '\0';
	if (ft_strlen(result) != 16)
	{
		free(result);
		return (0);
	}
	return (result);
}

char	*ft_init_map(void)
{
	char	*map;
	 int	i;

	map = (char *)malloc(sizeof(char) * 16 + 1);
	i = 0;
	while (i < 16)
		map[i++] = '0';
	map[i] = '\0';
	if (map == 0)
		return (0);
	else
		return (map);
}

int	main(int argc, char *argv[])
{
	char	*map;
	char	*input;
	 int	i;

	i = 0;
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) != 31)
			write(1, "Error\n", 6);
		else
		{
			input = ft_split(argv[1]);
			map = ft_init_map();
			if (!input || ft_strlen(input) != 16)
				write(1, "Error\n", 6);
			else if (!ft_track(0, map, input))
				write(1, "Error\n", 6);
		}
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
