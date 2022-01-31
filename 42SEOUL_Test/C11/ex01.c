#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		plus_alpha(int nb)
{
	return (nb + 100);
}

int main(void)
{
	int tab[10];
	for (int i = 0; i < 10; i++)
		tab[i] = i * i;
	int *arr = ft_map(tab, 10, &plus_alpha);
	for (int i = 0; i < 10; i++)
	{
		tab[i] = 0;
		printf("%d\n", arr[i]);
	}
	return (0);
}
