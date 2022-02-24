#include <stdio.h>
#include <string.h>
#include "ft.h"

void	ft_putchar(char c)
{
	printf("ft_putchar(c) -> %c\n", c);
}
void	ft_putstr(char *str)
{
	printf("ft_putstr(str) -> %s\n", str);
}
int		ft_strcmp(char *s1, char *s2)
{
	printf("ft_strcmp(s1, s2) -> %s, %s, %d\n", s1, s2, strcmp(s1, s2));
	return (strcmp(s1, s2));
}
int		ft_strlen(char *str)
{
	printf("ft_strlen(str) -> %d\n", (int)strlen(str));
	return (int)strlen(str);
}
void	ft_swap(int *a, int *b)
{
	printf("ft_swap(a, b) -> %p, %p\n", a, b);
}
