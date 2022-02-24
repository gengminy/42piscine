
#include <stdio.h>
int ft_str_is_uppercase(char *str);
int main(void)
{
	printf("%d\n", ft_str_is_uppercase("asdfasdf"));
	printf("%d\n", ft_str_is_uppercase("ASDFasdf"));
	printf("%d\n", ft_str_is_uppercase("ASSDDGBZAQ"));
	printf("%d\n", ft_str_is_uppercase("asdf1145aa"));
	printf("%d\n", ft_str_is_uppercase("aa aa"));
	printf("%d\n", ft_str_is_uppercase("2745!!AA"));
	printf("%d\n", ft_str_is_uppercase("AaaAaaAaaZzzZzz"));
    return 0;
}

