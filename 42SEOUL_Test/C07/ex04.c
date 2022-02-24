#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	do_test(char *nbr, char *base_from, char *base_to)
{
	printf("base_from='%s' base_to='%s'\n", base_from, base_to);
	printf("Result: ");
	char *answer = ft_convert_base(nbr, base_from, base_to);
	if (answer)
	{
		printf("'%s'", answer);
		free(answer);
	}
	else
	{
		printf("NULL!");
	}
	printf("\n");
}

int		main(void)
{
	do_test("!@#$%^&*()", ")!@#$%^&*(", "0123456789");
	do_test("                  +IOOOOOOOOOOOOOOOO", "OI", "01");
	do_test("    +-----+<C<B\"\'\'", "\'\"\?>.<,QWERT ABC", "0123456789ABCDEF");
	do_test("Qa QRRtRRaR ", "aQqR Tt", "0123456789");
	do_test("-_{{}}||_=_}=}{", "=_|{}", "0123456789");
	do_test("D'wyDZr", "ZXCS DF12345;:'\"qwertyas@#$", "0123456789");
	do_test("^$G$M", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_= ", "0123456789");
	do_test("!", "!@#$", "012");
	do_test("123456", "123456", "ABCDEFG");
	do_test("1234", "12345-64", "qwertyui");
	do_test("1234", "12345678+", "qwertyuio");
	do_test("", "", "");
	do_test("12345", "", "qwerz");
	do_test("12345", "a12356a7", "");
	do_test("     \t\v\f     +---------++-1235aaa776644", "a123567", "zxcasc");
	do_test("     \n\r\t     +---------++-1235aaa7766"  , "a123567", "asasdasdas");
	do_test("            +----8----++-1235aaa7766", "a123567", "as3ds");
	do_test("            +--------++-1235     !!aaa7766", "0123456789", "ole3456789");
	do_test("  \t  +-----+-<C<B\"\'\'", "\'\"\?>.<,QWERTABCD", "0123456789ABCDEF");
	do_test("12345", "a123567", "asdfqwer\n");
	printf("=====CASE01=====\n");
	printf("result : $%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("real answer : $7fffffff$\n");
	printf("=====CASE02=====\n");
	printf("result : $%s$\n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("real answer : $-1111111111111111111111111111111$\n");
	printf("=====CASE03=====\n");
	printf("result : $%s$\n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("real answer : $-1023$\n");
	printf("=====CASE04=====\n");
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
	printf("real answer : $a$\n");
	printf("=====CASE05=====\n");
	printf("result : $%s$\n", ft_convert_base(" \t\t\t ---+++ff-f", "0123456789abcdef", "0123456789"));
	printf("real answer : $-255\n");
	printf("=====CASE06=====\n");
	printf("result : $%s$\n", ft_convert_base("aasdffeessddfffss", "asedf", "ss"));
	printf("real answer : $(null)$\n");
	printf("=====CASE07=====\n");
	printf("result : $%s$\n", ft_convert_base("-+-+- -+asdf", "asdf", "fdsa"));
	printf("real answer : $f$\n");
	printf("=====CASE08=====\n");
	printf("result : $%s$\n", ft_convert_base("  -+-+- -+asdf", "ai sdf", "fdsa"));
	printf("real answer : $(null)$\n");
	printf("=====CASE09=====\n");
	printf("result : $%s$\n", ft_convert_base("\t\t\t\t \v --++-asdf", "asdf", "fd-as"));
	printf("real answer : $(null)$\n");
	printf("=====CASE10=====\n");
	printf("result : $%s$\n", ft_convert_base("   -+a", "abcde", ""));
	printf("real answer : $(null)$\n");
	printf("=====CASE11=====\n");
	printf("result : $%s$\n", ft_convert_base(" -+a", "", "df"));
	printf("real answer : $(null)$\n");
}
