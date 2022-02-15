#include <stdio.h>

int		ft_find_next_prime(int nb);
int main(void)
{
	for (int i = -4; i <= 257; i++)
		printf("find_next_prime(%d) = %d\n", i, ft_find_next_prime(i));
	for (int i = 2147395680; i <= 2147395700; i++)
		printf("find_next_prime(%d) = %d\n", i, ft_find_next_prime(i));
	for (int i = 2147483600; i > 0 && i <= 2147483647; i++)
		printf("find_next_prime(%d) = %d\n", i, ft_find_next_prime(i));
}
