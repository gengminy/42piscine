
#include <stdio.h>
#include <string.h>
unsigned int ft_strlcpy(char *src, char* dest, unsigned int size);
int main(void)
{
    char text1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char text1_[100];
	char text1_r[100];
	printf("%d %s\n", ft_strlcpy(text1_, text1, 100), text1_);
	printf("%lu %s\n", strlcpy(text1_r, text1, 100), text1_r);

	printf("\n");

    char text2[] = "a wOR23d 3is a STRin3G of ++aLphanuEeric .cHarac3ters.";
	char text2_[100];
	char text2_r[100];
	printf("%d %s\n", ft_strlcpy(text2_, text2, 11), text2_);
	printf("%lu %s\n", strlcpy(text2_r, text2, 11), text2_r);
    return 0;
}

