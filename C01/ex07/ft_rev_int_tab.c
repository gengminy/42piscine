//42header
#include <unistd.h>

int ft_rev_int_tab(int *tab, int size)
{
    int left;
    int right;
    int saved;

    left = 0;
    while (left < size / 2)
    {
        right = size - 1 - left;
        saved = tab[left];
        tab[left] = tab[right];
        tab[right] = saved;
        left++;
    }
}