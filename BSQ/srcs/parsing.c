#include "bsq.h"

char	*read_line(int fd)
{
	char	*line;
	char	buffer;
	 int	i;
	 int	size;

	i = 0;
	size = 2;
	line = (char *)safe_malloc(size);
	while (read(fd, &buffer, 1))
	{
		if (buffer == '\n')
		{
			line[i] = '\0';
			break ;
		}
		if (i + 1 == size)
		{
			size *= 2;
			line = get_double_size_line(line, size);
		}
		line[i++] = buffer;
	}
	if (i == 0)
		return (free_line(line));
	return (line);
}

int		read_map_info(t_map *map, char *info)
{
	int len;

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
	{
		free_map_info(map, info);
		return (0);
	}
	info[len - 3] = '\0';
	map->height = ft_atoi(info);
	if (map->height == 0)
	{
		free_map_info(map, info);
		return (0);
	}
	free_map_info(0, info);
	return (1);
}

t_map	*read_map(int fd)
{
	t_map	*map;
	 char	*line;
	  int	i;

	map = (t_map *)safe_malloc(sizeof(t_map));
	if (!read_map_info(map, read_line(fd)))
		return (0);
	map->arr = (char **)safe_malloc(sizeof(char *) * map->height);
	i = 0;
	map->width = 0;
	line = read_line(fd);
	while (line != 0)
	{
		if (!set_map_nth_line(i, map, line))
			return (0);
		line = read_line(fd);
		i++;
	}
	if (i != map->height)
	{
		free_map(map, i);
		return (0);
	}
	return (map);
}

int		set_map_nth_line(int i, t_map *map, char *line)
{
	int len;

	if (i == map->height || !is_map_valid(map, line))
	{
		free(line);
		free_map(map, i);
		return (0);
	}
	len = ft_strlen(line);
	if (map->width == 0)
		map->width = len;
	if (len != map->width)
	{
		free(line);
		free_map(map, i);
		return (0);
	}
	map->arr[i] = line;
	return (1);
}

char	*get_double_size_line(char *src, int size)
{
	char	*double_size_line;

	double_size_line = (char *)safe_malloc(size);
	ft_strncpy(double_size_line, src, size);
	free(src);
	return (double_size_line);
}
