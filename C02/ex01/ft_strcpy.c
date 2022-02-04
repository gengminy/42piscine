//42header
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int idx;

    idx = 0;
    while (src[idx] != '\0' && idx < n)
    {
        dest[idx] = src[idx];
        idx++;
    }
    return dest;
}