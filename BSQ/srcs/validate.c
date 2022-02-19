#include "bsq.h"

int		is_char_printable(char ch)
{
	if (' ' <= ch && ch <= '~')
		return (1);
	return (0);
}

int		is_number(char ch)
{
	if ('0' <= ch && ch <= '9')
		return (1);
	return (0);
}

int		is_map_info_valid(t_map *map)
{
	char	empty;
	char	obstacle;
	char	full;

	empty = map->empty;
	obstacle = map->obstacle;
	full = map->full;
	if (!is_char_printable(full))
		return (0);
	if (!is_char_printable(obstacle))
		return (0);
	if (!is_char_printable(empty))
		return (0);
	if (empty == obstacle || empty == full || obstacle == full)
		return (0);
	return (1);
}

int		is_map_valid(t_map *map, char *line)
{
	while (*line)
	{
		if (*line != map->empty && *line != map->obstacle)
			return (0);
		line++;
	}
	return (1);
}
