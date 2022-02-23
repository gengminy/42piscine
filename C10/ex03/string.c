#include "hexdump.h"

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (a[i] != b[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_strncpy(char *dst, char *src, int size)
{
	int	i;

	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

char    *malloc_with_null_init(int size)
{
     int    i;
    char    *result;

    result = (char *)malloc(size);
    if (!result)
        return (0);
    i = 0;
    while (i < size)
    {
        result[i] = '\0';
        i++;
    }
    return (result);
}
