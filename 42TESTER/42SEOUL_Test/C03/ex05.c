#include <stdio.h>
#include <string.h>
#include <memory.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

void prepare_test(char* buffer)
{
    memset(buffer, 0xCC, 60);
    strcpy(buffer, "What are you doing?");
}

void do_test(char* text, char* append, unsigned int sz)
{
    char buffer[60];
	unsigned int nb;

    prepare_test(buffer);
    nb = ft_strlcat(buffer, text, sz);
	printf("Your: %s(%d)\n", buffer, nb);
	nb = ft_strlcat(buffer, append, sz);
	printf("Your: %s(%d)\n", buffer, nb);

    prepare_test(buffer);
    nb = strlcat(buffer, text, sz);
	printf("CStdLib: %s(%d)\n", buffer, nb);
	nb = strlcat(buffer, append, sz);
	printf("CStdLib: %s(%d)\n", buffer, nb);
}

int main(void)
{
    do_test("Hello 42 ", "SEOUL!!", 23);
    do_test("Hello 42 ", "SEOUL!!!", 60);
    do_test("HeLLoooooo 422222222 ", "SEOUL!!!!", 0);
    do_test("HIHIHIHIHI Fourty-two ", "SEOUL!!!!!", 44);
    return 0;
}
