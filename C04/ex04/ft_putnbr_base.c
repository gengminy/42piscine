//Stdheader

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_is_radix_valid(char *base)
{
	char	*cmp;
	 int	radix;

	radix = ft_strlen(base);
	if (radix < 2)
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		cmp = base + 1;
		while(*cmp)
		{
			if(*cmp == *base)
				return (0);
			cmp++;
		}
		base++;
	}
	return (1);
}

void	ft_print_numbers(int nbr, char *base, int radix)
{
	int	cur_num;

	if (nbr < 0)
	{
		write(1, "-", 1);
		cur_num = -(nbr % radix);
		ft_print_numbers(-(nbr / radix), base, radix);
	}
	else if (nbr / radix == 0)
		cur_num = nbr;
	else
	{
		cur_num = nbr % radix;
		ft_print_numbers(nbr / radix, base, radix);
	}
	write(1, &base[cur_num], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	radix;

	radix = ft_strlen(base);
	if (ft_is_radix_valid(base))
		ft_print_numbers(nbr, base, radix);
}

int		main(void)
{
printf("----ex04----\n");
		printf("101010\n");
		ft_putnbr_base(42, "0a23l");
		printf("\n");

		printf("8867\n");
		ft_putnbr_base(1132, "9876543210");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "");
		printf("\n");

		printf("[SHOULD NOT PRINT]\n");
		ft_putnbr_base(1132, "aabc!");
		printf("\n");

		printf("-bDBbFjci\n");
		ft_putnbr_base(-2147483648, "abcdefghijABCDEFGHIJ"); // 20base
		printf("\n");

		printf("*///////\n");
		ft_putnbr_base(2147483647, "!@#$%^&*()<>,.?/"); // 16base
		printf("\n");

		printf("-@@#!\n");
		ft_putnbr_base(-42, "!@#"); // 3base
		printf("\n");
}
