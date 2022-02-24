#include <stdio.h>
#include "./ex00/ft.h"
#include "./ex01/ft_boolean.h"
#include "./ex02/ft_abs.h"
#include "./ex03/ft_point.h"
#include "./ex04/ft_strs_to_tab.c"
#include "./ex05/ft_show_tab.c"

// ex01
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

// ex03
void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 24;
}

// ex04, ex05
#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	printf("--ex01--\n");
	// ex01
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);

	printf("--ex02--\n");
	// ex02
	long long int a = -42;
	long long int b = 24;
	printf("abs %lld : %lld\n", a, ABS(a));
	printf("abs %lld : %lld\n", b, ABS(b));


	printf("--ex03--\n");
	// ex03
	t_point	point;

	set_point(&point);
	printf("%d, %d\n",point.x, point.y);

	printf("--ex04, ex05-- [you should put arguments when you run program]\n");
	// ex04, ex05
	struct s_stock_str *stock_str;

	stock_str = ft_strs_to_tab(argc, argv);
	ft_show_tab(stock_str);
	for(int i=0;stock_str[i].str!=0;i++)
		free(stock_str[i].copy);
	free(stock_str);

	return (SUCCESS);
}
