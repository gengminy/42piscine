
#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main(void)
{
	printf("%d\n", ft_str_is_lowercase("asdfasdf"));
	printf("%d\n", ft_str_is_lowercase("ASDFasdf"));
	printf("%d\n", ft_str_is_lowercase("ASSDDGBZAQ"));
	printf("%d\n", ft_str_is_lowercase("asdf1145aa"));
	printf("%d\n", ft_str_is_lowercase("aa aa"));
	printf("%d\n", ft_str_is_lowercase("2745!!AA"));
	printf("%d\n", ft_str_is_lowercase("AaaAaaAaaZzzZzz"));
    return 0;
}

