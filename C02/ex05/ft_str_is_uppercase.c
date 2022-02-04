//42header
#include <unistd.h>

int ft_str_is_uppercase(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if (str[idx] < 32 || str[idx] >= 127)
            return (0);
        idx++;
    }
    return (1);
}