#include <stdio.h>
int	ft_atoi(char* str);
int main(void)
{
	printf("%d\n", ft_atoi("1234"));
	printf("%d\n", ft_atoi("5678"));
	printf("%d\n", ft_atoi("-1234"));
	printf("%d\n", ft_atoi("-5678"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("2147483647"));

	printf("%d\n", ft_atoi("    +----++-2147483648"));
	printf("%d\n", ft_atoi("+------+0"));
	printf("%d\n", ft_atoi("\t\v----------++5123145"));
	printf("%d\n", ft_atoi("\n\f----------+-+5123145"));
	printf("%d\n", ft_atoi("\r     \n\t\v\n\f---++-----++2123133345"));

	printf("%d\n", ft_atoi("    +----++-2147483asdas648"));
	printf("%d\n", ft_atoi("+------+10000001"));
	printf("%d\n", ft_atoi(" +-----------+00000000000000000000000\t\v\f\n 000000000000000000"));
	printf("%d\n", ft_atoi("\t\v----------++5123--145"));
	printf("%d\n", ft_atoi("\n\f----------+-+5123+145"));
	printf("%d\n", ft_atoi("\r     \n\t\v\n\f---++-----++212  3133345"));
	return 0;
}
