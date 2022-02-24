#include "./ex05/ft_atoi_base.c"
#include <stdio.h>

int main()
{
	{
		printf("----ex05----\n");
		char *str1 = "   ---+--+AABCDESSEZ";
		char *str2 = "  \n \ta-a";
		char *str3 = " \v  ++2147483647";
		char *str4 = " \f  -----+-+!!@@#..<";
		char *str5 = "\r  \n -+-++-+2147483648";
		printf("-67174\n");
		printf("%d\n", ft_atoi_base(str1, "ABCDES")); // 6base
		printf("\n");
		printf("-1\n");
		printf("%d\n", ft_atoi_base(str1, "ABZ")); 	
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str3, "A-+")); // +- include
		printf("\n");
		printf("0\n");
		printf("%d\n", ft_atoi_base(str1, "")); // 0base
		printf("\n");
		printf("-2147483648\n");
		printf("%d\n", ft_atoi_base(str5, "0123456789")); // 10base
		printf("\n");
		printf("2\n");
		printf("%d\n", ft_atoi_base(str2, "cba")); // 3base
		printf("\n");
		printf("1126397\n");
		printf("%d\n", ft_atoi_base(str4, "!@#$%^&*()~?><'.")); // 16base
		printf("\n");
	}
	printf("\n");
}
