//42header
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if ('a' > str[idx] || str[idx] > 'z')
            return (0);
        idx++;
    }
    return (1);
}