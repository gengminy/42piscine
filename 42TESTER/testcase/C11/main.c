#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "./ex00/ft_foreach.c"
#include "./ex01/ft_map.c"
#include "./ex02/ft_any.c"
#include "./ex03/ft_count_if.c"
#include "./ex04/ft_is_sort.c"

#include "./ex06/ft_sort_string_tab.c"
#include "./ex07/ft_advanced_sort_string_tab.c"

void	x_ft_put_number(int number)
{
	if (number > 9)
		x_ft_put_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}
int	ft_square(int number)
{
	return (number * number);
}
int	ft_function(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}
int	ft_is_first_x(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int		ft_less_than(int a, int b)
{
	return (b - a);
}

int		ft_more_than(int a, int b)
{
	return (a - b);
}
int		ft_strccmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

int main(void)
{
    printf("===============ex00===============\n");
    {
        int	index;
        int	*tab;
        int	length;

        length = 10;
        tab = malloc(length * sizeof(int));
        index = 0;
        while (index < length)
        {
            tab[index] = index;
            index++;
        }
        ft_foreach(tab, length, &x_ft_put_number);
        printf("\n");
        printf("REAL ANSWER : 0123456789\n");
    }
    printf("\n");
    printf("===============ex01===============\n");
    {
        int	index;
        int	*tab;
        int	length;
        int	*results;

        length = 10;
        tab = malloc(length * sizeof(int));
        index = 0;
        while (index < length)
        {
            tab[index] = index;
            index++;
        }
        results = ft_map(tab, length, &ft_square);
        index = 0;
        while (index < length)
        {
            printf("[mapped] square(%d) = %d\n", index, results[index]);
            index++;
        }
        printf("========= REAL ANSWER =========\n");
        printf("[mapped] square(0) = 0\n");
        printf("[mapped] square(1) = 1\n");
        printf("[mapped] square(2) = 4\n");
        printf("[mapped] square(3) = 9\n");
        printf("[mapped] square(4) = 16\n");
        printf("[mapped] square(5) = 25\n");
        printf("[mapped] square(6) = 36\n");
        printf("[mapped] square(7) = 49\n");
        printf("[mapped] square(8) = 64\n");
        printf("[mapped] square(9) = 81\n");
    }
    printf("\n");
    printf("===============ex02===============\n");
    {
        char	**array;

        array = malloc(5 * sizeof(char *));
        array[0] = "O";
        array[1] = "O";
        array[2] = "O";
        array[3] = "X";
        array[4] = 0;
        printf("ft_any(...) = %d\n", ft_any(array, &ft_function));
        printf("========= REAL ANSWER =========\n");
        printf("ft_any(...) = 1\n");
    }
     printf("\n");
    printf("===============ex03===============\n");
    {
        int		length;
        char	**array;

        length = 5;
        array = malloc(length * sizeof(char *));
        array[0] = "O";
        array[1] = "X";
        array[2] = "O";
        array[3] = "X";
        array[4] = "O";
        printf("ft_count_if(...) = %d\n",
            ft_count_if(array, length, &ft_is_first_x));
        printf("========= REAL ANSWER =========\n");
        printf("ft_count_if(...) = 2\n");
    }    
    printf("\n");
    printf("===============ex04===============\n");    
    {
        static int	tabx[] = { 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7 };
        int			index;
        int			*tab;
        int			length;

        length = 10;
        tab = malloc(length * sizeof(int));
        index = 0;
        while (index < length)
        {
            tab[index] = index;
            index++;
        }
        printf("ft_is_sorted(1.........10) = %d\n", ft_is_sort(tab, length, &ft_less_than));
        index = 0;
        while (index < length)
        {
            tab[length - 1 - index] = index;
            index++;
        }
        printf("ft_is_sorted(10.........1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
        tab[5] = 100;
        printf("ft_is_sorted(10...100...1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
        tab[5] = 4;
        tab[9] = 100;
        printf("ft_is_sorted(10.....1.100) = %d\n", ft_is_sort(tab, length, &ft_more_than));
        printf("ft_is_sorted(.tabx.......) = %d\n", ft_is_sort(tabx, 13, &ft_more_than));
        printf("ft_is_sorted(.tabx.......) = %d\n", ft_is_sort(tabx, 13, &ft_less_than));
        printf("========== REAL ANSWER ==========\n");
        printf("ft_is_sorted(1.........10) = 1\n");;
        printf("ft_is_sorted(10.........1) = 1\n");
        printf("ft_is_sorted(10...100...1) = 0\n");
        printf("ft_is_sorted(10.....1.100) = 0\n");
        printf("ft_is_sorted(.tabx.......) = 1\n");
        printf("ft_is_sorted(.tabx.......) = 1\n");
    }
    printf("\n");
    printf("===============ex06===============\n");    
    {
        int		index;
        char	**tab;
        tab = malloc(8 * sizeof(char *));
        tab[0] = strdup("hello");
        tab[1] = strdup("world");
        tab[2] = strdup("a");
        tab[3] = strdup("aa");
        tab[4] = strdup("ba");
        tab[5] = strdup("ab");
        tab[6] = strdup("z");
        tab[7] = 0;
        index = 0;
        while (tab[index])
        {
            printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
            index++;
        }
        ft_sort_string_tab(tab);
        printf("\n");
        index = 0;
        while (tab[index])
        {
            printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
            index++;
        }
        printf("========= REAL ANSWER =========\n");
        printf("tab[0] <@ 0x7f9331402a70> = $hello$\n");
        printf("tab[1] <@ 0x7f9331402a78> = $world$\n");
        printf("tab[2] <@ 0x7f9331402a80> = $a$\n");
        printf("tab[3] <@ 0x7f9331402a88> = $aa$\n");
        printf("tab[4] <@ 0x7f9331402a90> = $ba$\n");
        printf("tab[5] <@ 0x7f9331402a98> = $ab$\n");
        printf("tab[6] <@ 0x7f9331402aa0> = $z$\n\n");
        printf("tab[0] <@ 0x7f9331402a70> = $a$\n");
        printf("tab[1] <@ 0x7f9331402a78> = $aa$\n");
        printf("tab[2] <@ 0x7f9331402a80> = $ab$\n");
        printf("tab[3] <@ 0x7f9331402a88> = $ba$\n");
        printf("tab[4] <@ 0x7f9331402a90> = $hello$\n");
        printf("tab[5] <@ 0x7f9331402a98> = $world$\n");
        printf("tab[6] <@ 0x7f9331402aa0> = $z$\n");
    }
    printf("\n");
    printf("===============ex07===============\n");    
    {
        int		index;
        char	**tab;
        tab = malloc(8 * sizeof(char *));
        tab[0] = strdup("hello");
        tab[1] = strdup("world");
        tab[2] = strdup("a");
        tab[3] = strdup("aa");
        tab[4] = strdup("ba");
        tab[5] = strdup("ab");
        tab[6] = strdup("z");
        tab[7] = 0;
        index = 0;
        while (tab[index])
        {
            printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
            index++;
        }
        ft_advanced_sort_string_tab(tab, &ft_strcmp);
        printf("\n");
        index = 0;
        while (tab[index])
        {
            printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
            index++;
        }
        printf("========= REAL ANSWER =========\n");
        printf("tab[0] <@ 0x7f9331402a70> = $hello$\n");
        printf("tab[1] <@ 0x7f9331402a78> = $world$\n");
        printf("tab[2] <@ 0x7f9331402a80> = $a$\n");
        printf("tab[3] <@ 0x7f9331402a88> = $aa$\n");
        printf("tab[4] <@ 0x7f9331402a90> = $ba$\n");
        printf("tab[5] <@ 0x7f9331402a98> = $ab$\n");
        printf("tab[6] <@ 0x7f9331402aa0> = $z$\n\n");
        printf("tab[0] <@ 0x7f9331402a70> = $a$\n");
        printf("tab[1] <@ 0x7f9331402a78> = $aa$\n");
        printf("tab[2] <@ 0x7f9331402a80> = $ab$\n");
        printf("tab[3] <@ 0x7f9331402a88> = $ba$\n");
        printf("tab[4] <@ 0x7f9331402a90> = $hello$\n");
        printf("tab[5] <@ 0x7f9331402a98> = $world$\n");
        printf("tab[6] <@ 0x7f9331402aa0> = $z$\n");
    }

}