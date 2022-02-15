#include <stdio.h>
int	ft_atoi_base(char *str, char *base);
int main(void)
{
	printf("%d\n", ft_atoi_base("10", "011"));
	printf("%d\n", ft_atoi_base("1234567890", "0123456789"));
	printf("%d\n", ft_atoi_base("10000000000000000", "01"));
	printf("%d\n", ft_atoi_base("5F5E100", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("104134211161", "0123456"));
	printf("%d\n", ft_atoi_base("-13344223434043", "01234"));
	printf("%d\n\n", ft_atoi_base("5EHNCKA", "0123456789ABCDEFGHIJKLMNOPQ"));

	printf("%d\n", ft_atoi_base("!@#$%^&*()", ")!@#$%^&*("));
	printf("%d\n", ft_atoi_base("IOOOOOOOOOOOOOOOO", "OI"));
	printf("%d\n", ft_atoi_base("<C<B\"\'\'", "\'\"\?>.<,QWERT ABC"));
	printf("%d\n", ft_atoi_base("Qa QR qQQQtQ", "aQqR Tt"));
	printf("%d\n", ft_atoi_base("-_{{}}||{}{}=}{", "=_|{}"));
	printf("%d\n", ft_atoi_base("D'ws;t4", "ZXCS DF12345;:'\"qwertyas@#$"));
	printf("%d\n", ft_atoi_base("^$O$M", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_= "));
	printf("%d\n\n", ft_atoi_base("!", "!@#$"));

	printf("T1: %d\n", ft_atoi_base("123456", "1234563"));
	printf("T2: %d\n", ft_atoi_base("1234", "12345-64"));
	printf("T3: %d\n", ft_atoi_base("1234", "12345678+"));
	printf("T4: %d\n", ft_atoi_base("", "1"));
	printf("T5: %d\n", ft_atoi_base("12345", ""));
	printf("T6: %d\n", ft_atoi_base("12345", "a12356a7"));
	printf("T7: %d\n", ft_atoi_base("     \t\v\f     +---------++-1235aaa776644", "a123567"));
	printf("T7: %d\n", ft_atoi_base("     \n\r\t     +---------++-1235aaa7766"  , "a123567"));
	printf("T8: %d\n", ft_atoi_base("            +----8----++-1235aaa7766", "a123567"));
	return 0;
}
