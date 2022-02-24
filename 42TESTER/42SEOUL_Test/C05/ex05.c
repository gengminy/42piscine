#include <stdio.h>

int		ft_sqrt(int nb);
int main(void)
{
	for (int i = -4; i <= 100; i++)
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
	printf("sqrt(%d) = %d\n", 2147483647, ft_sqrt(2147483647));
	printf("sqrt(%d) = %d\n", (int)0x80000000, ft_sqrt((int)0x80000000));
	printf("sqrt(%d) = %d\n", 494949494, ft_sqrt(494949494));
	printf("sqrt(%d) = %d\n", 499949494, ft_sqrt(499949494));
	for (int i = 2147395598; i <= 2147395620; i++)
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
}
