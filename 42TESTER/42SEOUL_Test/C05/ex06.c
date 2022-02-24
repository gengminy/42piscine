#include <stdio.h>

int		ft_is_prime(int nb);
int main(void)
{
	for (int i = -4; i <= 100; i++)
		printf("is_prime(%d) = %d\n", i, ft_is_prime(i));
	printf("is_prime(%d) = %d\n", 2147483647, ft_is_prime(2147483647));
	for (int i = 2147395600; i <= 2147395700; i++)
		printf("is_prime(%d) = %d\n", i, ft_is_prime(i));
}
