#include "bsq.h"

void	bsq(int fd)
{
	t_map		*map;
	t_square	*square;

	map = 0;
	if (fd > 0)
		map = read_map(fd);
	else if (fd == 0)
		map = read_map(0);
	if (!map)
	{
		ft_putstr(MAP_ERR);
		return ;
	}
	square = find_square(map);
	if (square->len == 0)
		ft_putstr(MAP_ERR);
	else
		print_answer(map, square);
	free_map(map, map->height);
	free(square);
}

int		main(int argc, char *argv[])
{
	int i;
	int	fd;

	if (argc == 1)
		bsq(0);
	else
	{
		i = 1;
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd != -1)
				bsq(fd);
			i++;
		}
	}
	return (0);
}
