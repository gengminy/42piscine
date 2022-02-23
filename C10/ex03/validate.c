#include "hexdump.h"

int	is_char_printable(unsigned char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}

int	is_flag(char *str)
{
	if (str[0] == '-' && str[1] == 'C')
		return (1);
	return (0);
}

int	is_str_equal(char *c1, char *c2)
{
	int	i;

	i = 0;
	while(c1[i] && c2[i] && i < 16)
	{
		if (c1[i] != c2[i])
			return (0);
		i++;
	}
	return (1);
}
