
#include <stdio.h>
char* ft_strcapitalize(char *str);
int main(void)
{
    char text1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(text1));
    char text2[] = "a wOR23d 3is a STRin3G of ++aLphanuEeric .cHarac3ters.";
	printf("%s\n", ft_strcapitalize(text2));
    return 0;
}

