#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2);
int main(void)
{
    char text1[] = "Hello 42 SEOUL!!\xDE\x86\x87";
    char text2[] = "Hello 42 SEOUL!!\xFE\x86\x87";
    char text3[] = "";
    char text4[] = "";
    char text5[] = "Hello 42 SEOUL!!";
    char text6[] = "Hello 42";
    char text7[] = "aaaaaaa";
    char text8[] = "";
    char text9[] = "";
    char text10[] = "aaaaaaa";

	printf("Your: %d\t\tCStdLib: %d\n", ft_strcmp(text1, text2), strcmp(text1, text2));
	printf("Your: %d\t\t\tCStdLib: %d\n", ft_strcmp(text3, text4), strcmp(text3, text4));
	printf("Your: %d\t\tCStdLib: %d\n", ft_strcmp(text5, text6), strcmp(text5, text6));
	printf("Your: %d\t\tCStdLib: %d\n", ft_strcmp(text7, text8), strcmp(text7, text8));
	printf("Your: %d\t\tCStdLib: %d\n", ft_strcmp(text9, text10), strcmp(text9, text10));
    return 0;
}
