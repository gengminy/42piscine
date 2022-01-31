#include <stdio.h>
#include <string.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int		r_strcmp(char *s1, char *s2)
{
	return strcmp(s1, s2);
}

int		compare_len(char *s1, char *s2)
{
	return strlen(s1) - strlen(s2);
}

void test1(int (*f)(char*,char*))
{
	char *tab[] = {
		"rXGUhQt",
		"VihSZbMNyY",
		"aMoCh29W8B",
		"h6kV4",
		"R",
		"GiJl9",
		"sMCryRJPSOu6",
		"FNb1",
		"oU",
		"oE",
		"d",
		"A",
		"PM",
		"NDmFi",
		"JtDHW",
		"B1JKR",
		"GTIurC0teHoJ",
		"VE",
		"N4ZS",
		0
	};
	ft_advanced_sort_string_tab(tab, f);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("\n");
}

int main(void)
{
	test1(&compare_len);
	test1(&r_strcmp);
	return (0);
}
