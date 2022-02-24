#include <unistd.h>
#include "ft_boolean.h"

void	ft_putstr(char*str)
{
	while(*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return((EVEN(nbr)) ? TRUE : FALSE);
}

void	do_test(int n)
{
	if (ft_is_even(n) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
}

int		main(int argc, char **argv) {
	(void)argv;
	do_test(argc - 1);
	do_test(1234);
	do_test(125);
	do_test(12465);
	do_test(2563243);
	do_test(0);
	do_test(2147483647);
	do_test(-2147483648);
	return(SUCCESS);
}
