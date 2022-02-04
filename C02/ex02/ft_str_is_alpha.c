//42header
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int idx;

    idx = 0;
    while (str[idx] != '\0')
    {
        if ('a' <= str[idx] && str[idx] <= 'z') ;
        else if ('A' <= str[idx] && str[idx] <= 'Z') ;
        else return (0);
        idx++;
    }
    return (1);
}