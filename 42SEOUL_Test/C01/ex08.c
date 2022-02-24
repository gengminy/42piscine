
#include <stdio.h>
void ft_sort_int_tab(int *tab, int size);
int main(void)
{
    int i;
    int tarray[] = { 5, 7, 9, 15, 66, 23, 56, 1, 98, 27 };
    int tarray2[] = {
        5, 7, 9, 15, 66, 23, 56, 1, 98, 27,
        101, 154, 236, 1266, 931, 2314, 331, 235, 123, 91,
        7101, 7154, 7236, 71266, 7931, 72314, 7331, 7235, 7123, 791,
        0 };

    ft_sort_int_tab(tarray, 10);
    ft_sort_int_tab(tarray2, 31);

    for (i = 0; i < 10; i++)
    {
        printf("%d ", tarray[i]);
    }
    for (i = 0; i < 31; i++)
    {
        printf("%d ", tarray2[i]);
    }

    return 0;
}

