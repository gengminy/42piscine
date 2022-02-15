#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int main(void)
{
	char *tab[] = {
		"Hello hello hello",
		"Hello 11234",
		"",
		"Go Thourh",
		"134",
		"!!!!!",
		"\?!\?!\?!\?\?!\?!\?!",
		"::*#$@Hell",
		"42 Seoul La Piscine",
		"dk whfflek",
		"anjsrk tmftmf whfflsmsrj rkxdmsep zz",
		"gma ;;",
		0
	};
	ft_sort_string_tab(tab);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
