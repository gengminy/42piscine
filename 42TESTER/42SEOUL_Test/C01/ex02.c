
#include <stdio.h>
void ft_swap(int *a, int *b);
int main(void)
{
    int a;
    int b;

	a = 1234;
    b = -1234;
	ft_swap(&a, &b);
	printf("%d%d", a, b);
    return 0;
}

