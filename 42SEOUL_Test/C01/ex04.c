
#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);
int main(void)
{
    int a;
    int b;

    a = 42;
    b = 6;
    ft_ultimate_div_mod(&a, &b);
	printf("%d, %d | ", a, b);

    a = 1312312421;
    b = 2314;
    ft_ultimate_div_mod(&a, &b);
	printf("%d, %d | ", a, b);

    a = -1923845;
    b = -123555;
    ft_ultimate_div_mod(&a, &b);
	printf("%d, %d | ", a, b);

    a = 11112222;
    b = -55556666;
    ft_ultimate_div_mod(&a, &b);
	printf("%d, %d | ", a, b);

    a = 1234;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
	printf("%d, %d | ", a, b);

    a = 0;
    b = 1;
    ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
    return 0;
}

