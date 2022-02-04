//42header
#include <unistd.h>

int ft_strlen(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
        idx++;
    return (idx);
}