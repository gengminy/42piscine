#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int main(void)
{
	printf("Your: %s\n", ft_strdup("Hello World!"));
	printf("CStdLib: %s\n", strdup("Hello World!"));
	printf("Your: %s\n", ft_strdup("ㅋㅋㅋ"));
	printf("CStdLib: %s\n", strdup("ㅋㅋㅋ"));
	return 0;
}
