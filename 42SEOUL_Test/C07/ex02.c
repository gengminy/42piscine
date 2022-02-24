#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

void do_test(int min, int max)
{
	int *p;
	int len;
	len = ft_ultimate_range(&p, min, max);
	printf("ft_ultimate_range(&p, %d, %d): [len %d] ", min, max, len);
	for  (int i = 0; i < max - min; i++)
		printf("%d ", p[i]);
	printf("_\n");
}

int main(void)
{
	int *p = NULL;
	printf("ft_ultimate_range(&p, 0, 0): %d, %p\n", ft_ultimate_range(&p, 0, 0), p);
	printf("ft_ultimate_range(&p, 1, 0): %d, %p\n", ft_ultimate_range(&p, 1, 0), p);
	printf("ft_ultimate_range(&p, 2, 0): %d, %p\n", ft_ultimate_range(&p, 1, 0), p);
	printf("ft_ultimate_range(&p, 0, 3): %d, %d\n", ft_ultimate_range(&p, 0, 3), p > (int *)0);
	printf("ft_ultimate_range(&p, 2, 5122): %d, %d\n", ft_ultimate_range(&p, 2, 5122), p > (int *)0);
	// printf("ft_range(0, 2147483647): %p\n", ft_range(0, 2147483647));
	do_test(-5, 5);
	do_test(-10, 10);
	do_test(34, 45);
	do_test(0, 10);
	return 0;
}
