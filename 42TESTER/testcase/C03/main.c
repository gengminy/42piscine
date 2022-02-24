#include <string.h> 
#include <stdio.h>
#include "./ex00/ft_strcmp.c"
#include "./ex01/ft_strncmp.c"
#include "./ex02/ft_strcat.c"
#include "./ex03/ft_strncat.c"
#include "./ex04/ft_strstr.c"
#include "./ex05/ft_strlcat.c"

 
int main(void)
{
    {
		printf("-------------ex00---------------\n");
		printf("---------<Using strcmp>-----------\n\n");
        char* str1 = "42MooOSeoul";
        char* str2 = "42Moo";
        char* str3 = "42MooOSeoul";
        char* str4 = "42MooSSeoul";
        char* str5 = "42MooASeoul";
    
        printf("strcmp(%s, %s)\t\t = %d\n", str1, str2, strcmp(str1, str2));
        printf("strcmp(%s, %s)\t = %d\n", str1, str3, strcmp(str1, str3));
        printf("strcmp(%s, %s)\t = %d\n", str1, str4, strcmp(str1, str4));
        printf("strcmp(%s, %s)\t = %d\n", str1, str5, strcmp(str1, str5));
    }
	printf("\n");
    {
		printf("---------<Using ft_strcmp>-----------\n\n");
        char* str1 = "42MooOSeoul";
        char* str2 = "42Moo";
        char* str3 = "42MooOSeoul";
        char* str4 = "42MooSSeoul";
        char* str5 = "42MooASeoul";

        printf("ft_strcmp(%s, %s)\t\t = %d\n", str1, str2, ft_strcmp(str1, str2));
        printf("ft_strcmp(%s, %s)\t = %d\n", str1, str3, ft_strcmp(str1, str3));
        printf("ft_strcmp(%s, %s)\t = %d\n", str1, str4, ft_strcmp(str1, str4));
        printf("ft_strcmp(%s, %s)\t = %d\n", str1, str5, ft_strcmp(str1, str5));
    }
	printf("\n");
	{
		printf("-------------ex01---------------\n");
		printf("---------<Using strncmp>-----------\n\n");
        char* str1 = "42MooOSeoul";
        char* str2 = "42Moo";
        char* str3 = "42MooOSeoul";
        char* str4 = "42MooSSeoul";
        char* str5 = "42MooASeoul";
    
        printf("strcmp(%s, %s)\t\t = %d\n", str1, str2, strncmp(str1, str2, 5));
        printf("strcmp(%s, %s)\t = %d\n", str1, str3, strncmp(str1, str3, 100));
        printf("strcmp(%s, %s)\t = %d\n", str1, str4, strncmp(str1, str4, 6));
        printf("strcmp(%s, %s)\t = %d\n", str1, str5, strncmp(str1, str5, 7));
    }
	printf("\n");
    {
		printf("---------<Using ft_strncmp>-----------\n\n");
        char* str1 = "42MooOSeoul";
        char* str2 = "42Moo";
        char* str3 = "42MooOSeoul";
        char* str4 = "42MooSSeoul";
        char* str5 = "42MooASeoul";

        printf("ft_strcmp(%s, %s)\t\t = %d\n", str1, str2, ft_strncmp(str1, str2, 5));
        printf("ft_strcmp(%s, %s)\t = %d\n", str1, str3, ft_strncmp(str1, str3, 100));
        printf("ft_strcmp(%s, %s)\t = %d\n", str1, str4, ft_strncmp(str1, str4, 6));
        printf("ft_strcmp(%s, %s)\t = %d\n", str1, str5, ft_strncmp(str1, str5, 7));
    }
	printf("\n");
	{
		printf("-------------ex02---------------\n");
		printf("---------<Using strcat>-----------\n\n");
		char origin[] = "42MooOSeoul";
		char dest1[100] = "abcdefg";
		strcat(dest1, origin);  
		printf("strcat(abcdefg, %s) : %s\n", origin, dest1);
	}
	printf("\n");
	{
		printf("---------<Using ft_strcat>-----------\n\n");
		char origin[] = "42MooOSeoul";
		char dest1[100] = "abcdefg";
		ft_strcat(dest1, origin);  
		printf("ft_strcat(abcdefg, %s) : %s\n", origin, dest1);
	}
	printf("\n");
	{
		printf("-------------ex03---------------\n");
		printf("---------<Using strncat>-----------\n\n");
		char origin[] = "42MooOSeoul";    
		char dest1[100] = "abcdefg1";
		char dest2[100] = "abcdefg2";
	
		strncat(dest1, origin, strlen(origin));
		strncat(dest2, origin, 5);
		printf("strncat(abcdefg1, %s, %lu) : %s\n", origin, strlen(origin), dest1);
		printf("strncat(abcdefg2, %s, %d) : %s\n", origin, 5, dest2);
	}
	printf("\n");
	{
		printf("---------<Using ft_strncat>-----------\n\n");
		char origin[] = "42MooOSeoul";    
		char dest1[100] = "abcdefg1";
		char dest2[100] = "abcdefg2";
	
		ft_strncat(dest1, origin, strlen(origin));
		ft_strncat(dest2, origin, 5);
		printf("ft_strncat(abcdefg1, %s, %lu) : %s\n", origin, strlen(origin), dest1);
		printf("ft_strncat(abcdefg2, %s, %d) : %s\n", origin, 5, dest2);
	}
	printf("\n");
	{
		printf("-------------ex04---------------\n");
		printf("---------<Using strstr>-----------\n\n");
		char s1[100] = "42 is a private, nonprofit and tuition-free computer programming school";
		char s2[50] = "free";
		char *ptr = strstr(s1, s2);
		printf("From\n\n%s\n\nFind \"%s\" and display from it then.....\n\n %s", s1, s2, ptr); 
	}
	printf("\n");
	{
		printf("---------<Using ft_strstr>-----------\n\n");
		char s1[100] = "42 is a private, nonprofit and tuition-free computer programming school";
		char s2[50] = "free";
		char *ptr = ft_strstr(s1, s2);
		printf("From\n\n%s\n\nFind \"%s\" and display from it then.....\n\n %s", s1, s2, ptr); 
	}
	printf("\n");
	{
		printf("-------------ex05---------------\n");
		printf("---------<Using strlcat>-----------\n\n");
		char dest[30] = "123";
		char *src = "456789";

		printf("dest = %s\tsrc = %s\n\n", dest, src);
		printf("try size 20\n");
		size_t ret = strlcat(dest, src, 20);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
	}
	{
		printf("try size 7\n");
		char dest[30] = "123";
		char *src = "456789";

		size_t ret = strlcat(dest, src, 7);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
	}
	{
		printf("try size 3\n");
		char dest[30] = "123";
		char *src = "456789";
		size_t ret = strlcat(dest, src, 3);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
	}
	printf("\n");
	{
		printf("---------<Using ft_strlcat>-----------\n\n");
		char dest[30] = "123";
		char *src = "456789";

		printf("dest = %s\tsrc = %s\n\n", dest, src);
		printf("try size 20\n");
		size_t ret = ft_strlcat(dest, src, 20);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
	}
	{
		printf("try size 7\n");
		char dest[30] = "123";
		char *src = "456789";

		size_t ret = ft_strlcat(dest, src, 7);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
	}
	{
		printf("try size 0\n");
		char dest[30] = "123";
		char *src = "456789";

		size_t ret = ft_strlcat(dest, src, 0);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
	}	
	{
		printf("try size 4\n");
		char dest[30] = "123";
		char *src = "456789";

		size_t ret = ft_strlcat(dest, src, 4);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
	}	
	{
		printf("try size 3\n");
		char dest[30] = "123";
		char *src = "456789";
		size_t ret = ft_strlcat(dest, src, 3);
		printf("dest = %s\treturn = %zu\n\n", dest, ret);
		printf("-----------<end of file>-------------");
	}


}
