//42header
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int saved;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                saved = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = saved;
            }
            j++;
        }
        i++;
    }
}