
#include <stdio.h>
void ft_putstr_non_printable(char *str);
int main(void)
{
    char text1[] = "salut, comment tu vas ? \x24\x42\x28\n\t\x7f\x8e 42mots quarante-deux; cinquante+et+un";
	ft_putstr_non_printable(text1);
    char text2[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(text2);

	putchar(0x0a);

    return 0;
}

