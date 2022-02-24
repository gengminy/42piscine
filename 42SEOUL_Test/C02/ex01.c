
#include <stdio.h>
#include <string.h>
#include <memory.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
    char text[] = "Hello 42 SEOUL!!";
	char buffer[100];
	char buffer2[100];
	char* ret;
	int i;

	memset(buffer, 0x25, 100);
	ret = ft_strncpy(buffer, text, 5);
	printf("%s - %d - %lu\n", buffer, (int)buffer - (int)ret, strlen(buffer));
	memset(buffer, 0x25, 100);
	ret = strncpy(buffer, text, 5);
	printf("%s - %d - %lu\n", buffer, (int)buffer - (int)ret, strlen(buffer));

	memset(buffer2, 0xCC, 100);
	ret = ft_strncpy(buffer2, text, 100);
	printf("%s - %d - %lu\n", buffer2, (int)buffer2 - (int)ret, strlen(buffer2));
	for (i = 16; i < 100; i++)
	{
		if (buffer2[i] != 0)
		{
			printf("Error: zero padding failed!!!\n");
			return 1;
		}
	}
	memset(buffer2, 0xCC, 100);
	ret = strncpy(buffer2, text, 100);
	printf("%s - %d - %lu\n", buffer2, (int)buffer2 - (int)ret, strlen(buffer2));
	for (i = 16; i < 100; i++)
	{
		if (buffer2[i] != 0)
		{
			printf("Error: zero padding failed???\n");
			return 1;
		}
	}
    return 0;
}

