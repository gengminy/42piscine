#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

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
		"42SEOUL42SEOUL",
		0
	};
	printf("tab1 result=%d\n", ft_any(tab1, &contains_space));
	char *tab2[] = {
		"42SEOUL42SEOUL",
		"DiffKO:(",
		"HelloAllAppAll",
		"\t\t\t\t\t",
		"",
		0
	};
	printf("tab2 result=%d\n", ft_any(tab2, &contains_space));
	char *tab3[] = {
		"42SEOUL42SEOUL",
		"HelloAllAppAll",
		"\t\t\t\t\t",
		"",
		"Diff OK :D",
		0
	};
	printf("tab3 result=%d\n", ft_any(tab3, &contains_space));
}
