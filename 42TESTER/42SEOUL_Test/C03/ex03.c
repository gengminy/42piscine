#include <stdio.h>
#include <string.h>
#include <memory.h>
char* ft_strncat(char *s1, char *s2, unsigned int nb);
void prepare_test(char* buffer)
{
    memset(buffer, 0xCC, 100);
    strcpy(buffer, "What are you doing?");
}
void do_test(char* text, char* append, unsigned int sz)
{
    char buffer[100];

    prepare_test(buffer);
    ft_strncat(buffer, text, sz);
	printf("Your: %s\n", ft_strncat(buffer, append, sz));

    prepare_test(buffer);
    strncat(buffer, text, sz);
	printf("CStdLib: %s\n", strncat(buffer, append, sz));
}
int main(void)
{
    char text1[] = "Hello 42 ";
    char text2[] = "Hello 42 ";
    char text3[] = "HeLLoooooo 422222222 ";
    char text4[] = "HIHIHIHIHI Fourty-two ";
    do_test(text1, "SEOUL!!", 100);
    do_test(text2, "SEOUL!!!", 3);
    do_test(text3, "SEOUL!!!!", 0);
    do_test(text4, "SEOUL!!!!!", 16);
    return 0;
}
