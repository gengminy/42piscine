#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int nb)
{
	printf("P=%d\n", nb);
}

int main(void)
{
	int tab[10];
	for (int i = 0; i < 10; i++)
		tab[i] = i * i;
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}
