#include <stdio.h>

int		ft_fibonacci(int index);

int main(void)
{
	for (int i = -5; i < 40; i++)
		printf("%d,", ft_fibonacci(i));
	printf("\n");
	return 0;
}
