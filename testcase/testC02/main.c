#include "./ex00/ft_strcpy.c"
#include "./ex01/ft_strncpy.c"
#include "./ex02/ft_str_is_alpha.c"
#include "./ex03/ft_str_is_numeric.c"
#include "./ex04/ft_str_is_lowercase.c"
#include "./ex05/ft_str_is_uppercase.c"
#include "./ex06/ft_str_is_printable.c"
#include "./ex07/ft_strupcase.c"
#include "./ex08/ft_strlowcase.c"
#include "./ex09/ft_strcapitalize.c"
#include "./ex10/ft_strlcpy.c"
#include "./ex11/ft_putstr_non_printable.c"
#include "./ex12/ft_print_memory.c"
#include <stdio.h>
#include <string.h>

int main(){
	{
		char str1[50] = "Empty txt";
		char str2[50] = "Hello 42";

		printf("----ex00----\nBefore Copy\n%s\n%s\n", str1, str2);
		char *str_cp = strcpy(str1, str2);
		printf("Copied str : %s\n", str_cp);
		printf("After Copy\n%s\n%s\n", str1, str2);
	}
	printf("\n");
	{
		char str1[50] = "Empty txt";
		char str2[50] = "Hello 42";

		printf("test\nBefore Copy\n%s\n%s\n", str1, str2);
		char *str_cp = ft_strcpy(str1, str2);
		printf("Copied str : %s\n", str_cp);
		printf("After Copy\n%s\n%s\n", str1, str2);
	}
	printf("\n");

	{
		char str1[50] = "made by";
		char str2[50] = "sryou";
		printf("----ex01----\nBefore Copy\n%s\n%s\n", str1, str2);
		char *str_cp = strncpy(str1, str2, 6);
		printf("Copied str : %s\n", str_cp); //sryou
		printf("After Copy\n%s\n%s\n", str1, str2); // sryou sryou
	}
	printf("\n");
	{
		char str1[50] = "made by";
		char str2[50] = "sryou";
		printf("test\nBefore Copy\n%s\n%s\n", str1, str2);
		char *str_cp = ft_strncpy(str1, str2, 6);
		printf("Copied str : %s\n", str_cp); //sryo
		printf("After Copy\n%s\n%s\n", str1, str2); // sryou sryou
	}
	printf("\n");
	
	{
		char str1[50] = "anseddmeAASDFcc";
		char str2[50] = "as1aslkAA";
		char str3[50] = "";
		char str4[50] = " aab";
		printf("----ex02----\n");
		printf("1, 0, 1, 0 : %d, %d, %d, %d\n", ft_str_is_alpha(str1), ft_str_is_alpha(str2), ft_str_is_alpha(str3), ft_str_is_alpha(str4));
	}
	printf("\n");

	{
		char str1[50] = "1200215100";
		char str2[50] = "11as1aslkAA";
		char str3[50] = "";
		char str4[50] = " \n1123;";
		printf("----ex03----\n");
		printf("1, 0, 1, 0 : %d, %d, %d, %d\n", ft_str_is_numeric(str1), ft_str_is_numeric(str2), ft_str_is_numeric(str3), ft_str_is_numeric(str4));
	}
	printf("\n");

	{
		char str1[50] = "asdbabkjo";
		char str2[50] = "kAA";
		char str3[50] = "";
		char str4[50] = ";a";
		printf("----ex04----\n");
		printf("1, 0, 1, 0 : %d, %d, %d, %d\n", ft_str_is_lowercase(str1), ft_str_is_lowercase(str2), ft_str_is_lowercase(str3), ft_str_is_lowercase(str4));
	}
	printf("\n");

	{
		char str1[50] = "ASDFCC";
		char str2[50] = "kAA";
		char str3[50] = "";
		char str4[50] = "1A";
		printf("----ex05----\n");
		printf("1, 0, 1, 0 : %d, %d, %d, %d\n", ft_str_is_uppercase(str1), ft_str_is_uppercase(str2), ft_str_is_uppercase(str3), ft_str_is_uppercase(str4));
	}
	printf("\n");

	{
		char str1[50] = "1 as f;;'23?!~4";
		char str2[50] = "\n";
		char str3[50] = "";
		char str4[50] = {1, 2, 0};
		printf("----ex06----\n");
		printf("1, 0, 1, 0 : %d, %d, %d, %d\n", ft_str_is_printable(str1), ft_str_is_printable(str2), ft_str_is_printable(str3), ft_str_is_printable(str4));
	}
	printf("\n");
	
	{
		char str1[50] = "1 as f;;'23?!~4";
		char str2[50] = "aanbBBDF1223NNASDFa";
		char str3[50] = "";
		printf("----ex07----\n");
		printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Changed Str : %s\n", ft_strupcase(str1));
		printf("Changed Str : %s\n", ft_strupcase(str2));
		printf("Changed Str : %s\n", ft_strupcase(str3));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	}
	printf("\n");

	{
		char str1[50] = "1FF as f;;'23?!~4aa";
		char str2[50] = "aanbBBDF1223NNASDFa";
		char str3[50] = "";
		printf("----ex08----\n");
		printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Changed Str : %s\n", ft_strlowcase(str1));
		printf("Changed Str : %s\n", ft_strlowcase(str2));
		printf("Changed Str : %s\n", ft_strlowcase(str3));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	}
	printf("\n");

	{
		char str1[100] = "salut, comment tu vas ? 42mots quet-des; cinqu+et+un";
		char str2[100] = "";
		char str3[100] = "HellO, I AM sryou. ????is gOOD FOR ;;42's 42HELLO";
		printf("----ex09----\n");
		printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Changed Str : %s\n", ft_strcapitalize(str1));
		printf("Changed Str : %s\n", ft_strcapitalize(str2));
		printf("Changed Str : %s\n", ft_strcapitalize(str3));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	}
	printf("\n");

	{
		char str1[100] = "salut, i am student's of 42 seoul and i study for C";
		char str2[100] = "Well, do you try to pass the exam?";
		char str3[100] = "Hi Guys Welcome to the cluster";
		printf("----ex10----\n");
		printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Copied len : %lu\n", strlcpy(str1, str2, (unsigned int)100));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Copied len : %lu\n", strlcpy(str1, str2, (unsigned int)1));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Copied len : %lu\n", strlcpy(str1, str3, (unsigned int)10));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	}
	printf("\n");{
		char str1[100] = "salut, i am student's of 42 seoul and i study for C";
		char str2[100] = "Well, do you try to pass the exam?";
		char str3[100] = "Hi Guys Welcome to the cluster";
		printf("test\n");
		printf("Before Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Copied len : %u\n", ft_strlcpy(str1, str2, (unsigned int)100));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Copied len : %u\n", ft_strlcpy(str1, str2, (unsigned int)1));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
		printf("Copied len : %u\n", ft_strlcpy(str1, str3, (unsigned int)10));
		printf("After Change\n%s\n%s\n%s\n", str1, str2, str3);
	}
	printf("\n");

	{
		char str1[1000] = "Cooucou\ntu vas bien ?";
		char str2[1000] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70};
		char str3[1000] = "\\'/<>!@#$%^&*()_+-=  0.2158\n\tasdf";
		printf("----ex11----\n");
		printf("Before Change\nstr1 : \n%s\nstr2 : \n%s\nstr3 : \n%s\n", str1, str2, str3);
		ft_putstr_non_printable(str1);
		ft_putstr_non_printable(str2);
		ft_putstr_non_printable(str3);
		printf("After Change\nstr1 : \n%s\nstr2 : \n%s\nstr3 : \n%s\n", str1, str2, str3);
	}
	printf("\n");
	
	{
	char	*string;

	string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	ft_print_memory(string, 1500);
		printf("----ex12----\n");
		printf("%s\n  %p\n",string, string);
		ft_print_memory(string,55);
		ft_print_memory(string,0);
		ft_print_memory(string+9,13);
	}		
}
