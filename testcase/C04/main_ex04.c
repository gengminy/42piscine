#include "./ex04/ft_putnbr_base.c"
#include <stdio.h>

int main()
{
	{
		printf("----ex04----\n");
		printf("8867\n");
		ft_putnbr_base(1132, "9876543210");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "aabc!");
		printf("\n");

		printf("-bDBbFjci\n");
		ft_putnbr_base(-2147483648, "abcdefghijABCDEFGHIJ"); // 20base
		printf("\n");

		printf("*///////\n");
		ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/"); // 16base
		printf("\n");

		printf("-@@#!\n");
		ft_putnbr_base(-42, "!@#"); // 3base
		printf("\n");
	}
	printf("\n");
}
