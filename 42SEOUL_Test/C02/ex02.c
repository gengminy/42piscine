
#include <stdio.h>
int ft_str_is_alpha(char *str);
int main(void)
{
	printf("%d\n", ft_str_is_alpha("asdfasdf"));
	printf("%d\n", ft_str_is_alpha("ASDFasdf"));
	printf("%d\n", ft_str_is_alpha("ASSDDGBZAQ"));
	printf("%d\n", ft_str_is_alpha("\x6\x1\x7"));
	printf("%d\n", ft_str_is_alpha("\x8F\x9E\xED"));
	printf("%d\n", ft_str_is_alpha("\x88\x87\x89\x8A"));
	printf("%d\n", ft_str_is_alpha("AaaAaaZzzZzz"));
    return 0;
}

