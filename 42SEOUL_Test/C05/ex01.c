#include <stdio.h>

int		ft_recursive_factorial(int nb);

int main(void)
{
	for (int i = -5; i < 40; i++)
		printf("%d\n", ft_recursive_factorial(i));
	return 0;
}
