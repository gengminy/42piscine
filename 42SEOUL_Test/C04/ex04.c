#include <stdio.h>
#include <unistd.h>
void ft_putnbr_base(int nbr, char *base);
int main(void)
{
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
	return 0;
}
