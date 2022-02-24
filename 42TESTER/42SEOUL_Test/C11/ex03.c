#include <stdio.h>

int		ft_count_if(char **tab, int length, int (*f)(char*));

int		contains_space(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	char *tab1[] = {
		"Hello World!!",
		"42SEOUL  42SEOUL",
		"HelloAllAppAll",
		"\t\t\t\t\t",
		"DiffKO:(",
		"Diff OK :D",
		"Diff OK :D",
		"Diff OK :D",
		"Diff OK :D",
		"Diff OK :D",
		"Diff OK :D"
	};
	printf("tab1 result=%d\n", ft_count_if(tab1, 11, &contains_space));
	char *tab2[] = {
		"42SEOUL42SEOUL",
		"DiffKO:(",
		"HelloAllAppAll",
		"\t\t\t\t\t",
		""
	};
	printf("tab2 result=%d\n", ft_count_if(tab2, 5, &contains_space));
	char *tab3[] = {
		"42SEOUL42SEOUL",
		"HelloAllAppAll",
		"\t\t\t\t\t",
		"",
		"Diff OK :D"
	};
	printf("tab3 result=%d\n", ft_count_if(tab3, 5, &contains_space));
}
