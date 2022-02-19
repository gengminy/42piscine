#include "bsq.h"

void	*safe_malloc(int size)
{
	void	*p;

	p = malloc(size);
	if (!p)
		exit(0);
	return (p);
}

void	free_map_info(t_map *map, char *info)
{
	if (map)
		free(map);
	free(info);
}

void	free_map(t_map *map, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		free(map->arr[i]);
	free(map->arr);
	free(map);
}

char	*free_line(char *line)
{
	free(line);
	return (0);
}
