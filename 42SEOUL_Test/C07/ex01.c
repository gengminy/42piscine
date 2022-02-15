#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

void do_test(int min, int max)
{
	int *p = ft_range(min, max);
	printf("ft_range(%d, %d):", min, max);
	for  (int i = 0; i < max - min; i++)
		printf("%d ", p[i]);
	printf("\n");
}

int main(void)
{
	printf("ft_range(0, 0): %p\n", ft_range(0, 0));
	printf("ft_range(1, 0): %p\n", ft_range(1, 0));
	printf("ft_range(2, 0): %p\n", ft_range(1, 0));
	printf("ft_range(0, 3): %d\n", ft_range(0, 3) > (int *)0);
	printf("ft_range(2, 5122): %d\n", ft_range(2, 5122) > (int *)0);
	// printf("ft_range(0, 2147483647): %p\n", ft_range(0, 2147483647));
	do_test(-5, 5);
	do_test(-10, 10);
	do_test(34, 45);
	do_test(0, 10);
	return 0;
}
