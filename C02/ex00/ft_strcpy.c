//42header
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int idx;

    idx = 0;
    while (src[idx] != '\0')
    {
        dest[idx] = src[idx];
        idx++;
    }
    dest[idx] = '\0';
    return dest;
}