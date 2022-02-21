/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knoh <knoh@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:49:13 by knoh              #+#    #+#             */
/*   Updated: 2022/02/20 14:49:13 by knoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_first_line(int fd)
{
	char	*line;
	char	buffer;
	 int	i;

	i = 0;
	line = (char *)safe_malloc(100000);
	while (read(fd, &buffer, 1))
	{
		if (buffer == '\n')
		{
			line[i] = '\0';
			break ;
		}
		line[i++] = buffer;
	}
	if (i == 0)
	{
		free(line);
		return (0);
	}
	return (line);
}

int	read_map_info(t_map *map, char *info)
{
	int	len;

	len = ft_strlen(info);
	if (len < 4)
	{
		free_map_info(map, info);
		return (0);
	}
	map->empty = info[len - 3];
	map->obstacle = info[len - 2];
	map->full = info[len - 1];
	if (!is_map_info_valid(map))
		return (free_map_info(map, info));
	info[len - 3] = '\0';
	if (!is_number(info[0]))
	{
		free_map_info(map, info);
		exit(0);
	}
	map->height = ft_atoi(info);
	if (map->height == 0)
		return (free_map_info(map, info));
	return (!free_map_info(0, info));
}

int	set_line(t_map *map, int col, char *start, char *end)
{
	 int	len;
	char	*line;

	if (col > map->height)
		return (0);
	len = end - start;
	if (map->width == 0)
		map->width = len;
	else if (map->width != len)
		return (0);
	line = (char *)safe_malloc(len + 1);
	if (!ft_strncpy(line, start, len))
	{
		free(line);
		return (0);
	}
	map->arr[col] = line;
	return (1);
}

int	parse_line(t_map *map, char *data)
{
	char	*p;
	 int	col;

	col = 0;
	p = data;
	while (*data)
	{
		if (*data == '\n')
		{
			if (!set_line(map, col, p, data))
				break ;
			if (*(data + 1))
				p = data + 1;
			col++;
		}
		data++;
	}
	if (col != map->height)
	{
		free(map->arr[col - 1]);
		free_map(map, col - 1);
		return (0);
	}
	return (1);
}

t_map	*read_map(int fd)
{
	t_map	*map;
	 char	*raw_data;
	  int	size;

	map = (t_map *)safe_malloc(sizeof(t_map));
	if (!read_map_info(map, read_first_line(fd)))
		return (0);
	map->arr = (char **)safe_malloc(sizeof(char *) * map->height);
	raw_data = (char *)safe_malloc(MAX_BUF_SIZE + 1);
	size = read(fd, raw_data, MAX_BUF_SIZE);
	if (!size)
	{
		free_map(map, 0);
		free(raw_data);
		return (0);
	}
	map->width = 0;
	if (!parse_line(map, raw_data))
	{
		free(raw_data);
		return (0);
	}
	free(raw_data);
	return (map);
}
