#include <stdio.h>
#include <string.h>
#include <memory.h>
char* ft_strcat(char *s1, char *s2);
void prepare_test(char* buffer)
{
    memset(buffer, 0xCC, 100);
    strcpy(buffer, "What are you doing? ");
}
void do_test(char* text, char* append)
{
    char buffer[100];

    prepare_test(buffer);
    ft_strcat(buffer, text);
	printf("Your: %s\n", ft_strcat(buffer, append));

    prepare_test(buffer);
    strcat(buffer, text);
	printf("CStdLib: %s\n", strcat(buffer, append));
}
int main(void)
{
    char text1[] = "Hello 42 ";
    char text2[] = "Hello 42 ";
    char text3[] = "HeLLoooooo 422222222 ";
    char text4[] = "HIHIHIHIHI Fourty-two ";
    do_test(text1, "SEOUL!!");
    do_test(text2, "SEOUL!!!");
    do_test(text3, "SEOUL!!!!");
    do_test(text4, "SEOUL!!!!!");
    return 0;
}
