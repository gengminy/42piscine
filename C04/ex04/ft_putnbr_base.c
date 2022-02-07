//Stdheader

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return i;
}

int	ft_is_radix_valid(char *base)
{
	char	*cmp;

	while (*base)
	{
		cmp = base;
		if (*base == '+' || *base == '-')
			return (0);
		while(*(cmp++))
			if(*cmp == *base)
				return (0);
		base++;
	}
	return (1);
}

void	ft_print_numbers(int nbr, char *base, int radix)
{
	int cur_num;
	
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
	int radix;

	radix = ft_strlen(base);
	if (radix > 1 && ft_is_radix_valid(base))
		ft_print_numbers(nbr, base, radix);
}

int		main(void)
{
	ft_putnbr_base(-64, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(1234567890, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(65536, "01");
	write(1, "\n", 1);
	ft_putnbr_base(100000000, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "0123456");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "01234");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "0123456789");
	write(1, "\n", 1);	
	ft_putnbr_base(2147438647, "0123456789ABCDEFGHIJKLMNOPQ");
	write(1, "\n", 1);
	write(1, "\n", 1);

	ft_putnbr_base(1234567890, ")!@#$%^&*(");
	write(1, "\n", 1);
	ft_putnbr_base(65536, "OI");
	write(1, "\n", 1);
	ft_putnbr_base(100000000, "\'\"\?>.<,QWERT ABC");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "aQqR Tt");
	write(1, "\n", 1);
	ft_putnbr_base(-2147438648, "=_|{}");
	write(1, "\n", 1);
	ft_putnbr_base(2147438647, "ZXCS DF12345;:'\"qwertyas@#$");
	write(1, "\n", 1);

	ft_putnbr_base(2147438647, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()_= ");
	write(1, "\n", 1);
	ft_putnbr_base(0, "!@#$");
	write(1, "\n", 1);
	write(1, "\nT1: ", 5);
	ft_putnbr_base(12345, "1234563");
	write(1, "\nT2: ", 5);
	ft_putnbr_base(12345, "12345-64");
	write(1, "\nT3: ", 5);
	ft_putnbr_base(12345, "12345678+");
	write(1, "\nT4: ", 5);
	ft_putnbr_base(12345, "1");
	write(1, "\nT5: ", 5);
	ft_putnbr_base(12345, "");
	write(1, "\nT6: ", 5);
	ft_putnbr_base(12345, "a12356a7");
	write(1, "\n", 1);
}