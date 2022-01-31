#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int main(void)
{
	for (int i = -5; i < 30; i++)
		printf("%d %d %d %d %d %d %d\n",
			ft_recursive_power(0, i),
			ft_recursive_power(1, i),
			ft_recursive_power(2, i),
			ft_recursive_power(3, i),
			ft_recursive_power(4, i),
			ft_recursive_power(5, i),
			ft_recursive_power(10, i));
	return 0;
}
