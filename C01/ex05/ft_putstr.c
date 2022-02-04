//42header
#include <unistd.h>

void ft_putstr(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        write(1, &str[idx], 1);
        idx++;
    }
}