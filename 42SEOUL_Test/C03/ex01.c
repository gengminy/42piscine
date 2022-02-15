#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
    char text1[] = "Hello 42 SEOUL!!";
    char text2[] = "Hello 42 SEOUL!!";
    char text3[] = "";
    char text4[] = "";
    char text5[] = "Hello";
    char text6[] = "Hello 42";
    char text7[] = "aaaaaaa";
    char text8[] = "";
    char text9[] = "aaabb";
    char text10[] = "aaaaaaa";

	printf("Your: %d\t\t\tCStdLib: %d\n", ft_strncmp(text1, text2, 100), strncmp(text1, text2, 100));
	printf("Your: %d\t\t\tCStdLib: %d\n", ft_strncmp(text3, text4, 7), strncmp(text3, text4, 7));
	printf("Your: %d\t\tCStdLib: %d\n", ft_strncmp(text5, text6, 20), strncmp(text5, text6, 20));
	printf("Your: %d\t\tCStdLib: %d\n", ft_strncmp(text7, text8, 13), strncmp(text7, text8, 13));
	printf("Your: %d\t\t\tCStdLib: %d\n", ft_strncmp(text9, text10, 2), strncmp(text9, text10, 2));
    return 0;
}
