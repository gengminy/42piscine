#include <stdio.h>
#include <string.h>
#include <memory.h>
char* ft_strstr(char *str, char *to_find);
void do_test(char* str, char* to_find)
{
	printf("Your: %s\n", ft_strstr(str, to_find));
	printf("CStdLib: %s\n", strstr(str, to_find));
}
int main(void)
{
    do_test("Hello 42 SEOUL!!! 42 is true?!", " ");
    do_test("", "43");
    do_test("", "");	    do_test("", "");
    do_test("Hello 42 SEOUL!!! 4343434343?!", "");
    do_test("Hello 42 SEOUL!!! 42 is true?!", "true?!");
    do_test("Hello 42 SEOUL!!! 42 is true?!", "");
    do_test("ASDF", "");
    return 0;
}
