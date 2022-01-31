#include <stdio.h>
#include <stdlib.h>
#include "ft_abs.h"

void do_test(int nbr)
{
	printf("%d, %d\n", ABS(nbr), abs(nbr));
}

int main(void)
{
	do_test(123456);
	do_test(-123456);
	do_test(0);
	do_test(2147483647);
	do_test(-2147483647);
	do_test(-2147483648);
	return (0);
}
