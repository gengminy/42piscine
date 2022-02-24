
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);
int main(void)
{
    int tarray[10];
    int tarray2[31];
    int i;

    for (i = 0; i < 10; i++)
    {
        tarray[i] = i;
    }
    for (i = 0; i < 31; i++)
    {
        tarray2[i] = i;
    }

    ft_rev_int_tab(tarray, 10);
    ft_rev_int_tab(tarray2, 31);

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

