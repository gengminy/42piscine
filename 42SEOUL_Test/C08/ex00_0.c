#include <stdio.h>
#include "ft.h"

int main(void)
{
#ifndef FT_H
	printf("Non properly FT_H guard!!\n");
#else
	ft_putchar('a');
	ft_putstr("gogo");
	ft_strcmp("goto", "heaven");
	ft_strlen("12345");
	ft_swap(0, 0);
#endif
	return (0);
}
