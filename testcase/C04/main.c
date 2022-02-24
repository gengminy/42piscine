#include "./ex00/ft_strlen.c"
#include "./ex01/ft_putstr.c"
#include "./ex02/ft_putnbr.c"
#include "./ex03/ft_atoi.c"
#include "./ex04/ft_putnbr_base.c"
#include "./ex05/ft_atoi_base.c"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int main(void)
{
    printf("\n------------ ex00 ------------\n");
	char *str00;
	str00 = " Hello my ";
	printf("TEST CASE   : \"%s\"\n", str00);
	printf("orig  : %lu\n", strlen(str00));
	printf("yours : %d\n", ft_strlen(str00));

    printf("\n------------ ex01 ------------\n");
	char *str01;
	str01 = "Hello World";
	printf("TEST CASE   :  \"%s\"\n",str01);
	ft_putstr(str01);
	printf("\n");

    printf("\n------------ ex02 ------------\n");
	ft_putnbr(42);
	printf(" <= putnbr(42)\n");
	ft_putnbr(4242);
	printf(" <= putnbr(4242)\n");
	ft_putnbr(20000706);
	printf(" <= putnbr(20000706)\n");
	ft_putnbr(+2147483647);
	printf(" <= putnbr(2147483647)\n");
	ft_putnbr(-2147483648);
	printf(" <= putnbr(-2147483648)\n");

    printf("\n------------ ex03 ------------\n");
	char *str;
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;
	char *str10;
	char *str11;

	str = " ---+--+1234ab567";
	str1 = "     ---123123ab567";
	str2 = "-   -  -1a";
	str3 = "- + -+ - + a 1 b";
	str4 = "\t -123";
	str5 = "\n -123";
	str6 = "\v -123";
	str7 = "\f -123";
	str8 = "\r -123";
	str9 = "\t\n\v\f\r\t -+-+123abc";
	str10 = "-123";
	str11 = " 123";
	printf("TEST CASE \"%s\"\n",str);
	printf("Your Answer : %d\n", ft_atoi(str));
	printf("Real Answer : -1234\n");
	printf("TEST CASE \"%s\"\n",str1);
	printf("Your Answer : %d\n", ft_atoi(str1));
	printf("Real Answer : -123123\n");
	printf("TEST CASE \"%s\"\n",str2);
	printf("Your Answer : %d\n", ft_atoi(str2));
	printf("Real Answer : 0\n");
	printf("TEST CASE \"%s\"\n",str3);
	printf("Your Answer : %d\n", ft_atoi(str3));
	printf("Real Answer : 0\n");
	printf("TEST CASE \"%s\"\n",str4);
	printf("Your Answer : %d\n", ft_atoi(str4));
	printf("Real Answer : -123\n");
	printf("TEST CASE \"%s\"\n",str5);
	printf("Your Answer : %d\n", ft_atoi(str5));
	printf("Real Answer : -123\n");
	printf("TEST CASE \"%s\"\n",str6);
	printf("Your Answer : %d\n", ft_atoi(str6));
	printf("Real Answer : -123\n");
	printf("TEST CASE \"%s\"\n",str7);
	printf("Your Answer : %d\n", ft_atoi(str7));
	printf("Real Answer : -123\n");
	printf("TEST CASE \"%s\"\n",str8);
	printf("Your Answer : %d\n", ft_atoi(str8));
	printf("Real Answer : -123\n");
	printf("TEST CASE \"%s\"\n",str9);
	printf("Your Answer : %d\n", ft_atoi(str9));
	printf("Real Answer : 123\n");
	printf("TEST CASE \"%s\"\n",str10);
	printf("Your Answer : %d\n", ft_atoi(str10));
	printf("Real Answer : -123\n");
	printf("TEST CASE \"%s\"\n",str11);
	printf("Your Answer : %d\n", ft_atoi(str11));
	printf("Real Answer : 123\n");

    printf("\n------------ ex04 ------------\n");
	printf("input number : -123456, base \"helo\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	printf("Real Answer : -eolhlehhh\n");
	fflush(stdout);
	printf("input number : -2147483648, base \"0123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	printf("Real Answer : -2147483648\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"0123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\t123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\n123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\v123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\f123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \"\r123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n");
	fflush(stdout);
	printf("input number : 2147483647, base \" 123456789\"\n");
	write(1, "Your Answer : ", 14);
	ft_putnbr_base(INT_MAX, "0123456789");
	printf("\n");
	printf("Real Answer : 2147483647\n"); 

    printf("\n------------ ex05 ------------\n");
	printf("input number : -123456, base \"0123456789\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-123456", "0123456789"));
	printf("Real Answer : -123456\n");
	fflush(stdout);
	printf("input number : 11110001001000000, base \"01\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("11110001001000000", "01"));
	printf("Real Answer : 123456\n");
	fflush(stdout);
	printf("input number : -1e240, base \"0123456789abcdef\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	printf("Real Answer : -123456\n");
	fflush(stdout);    
}
