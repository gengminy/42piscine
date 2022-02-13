int	ft_get_number(char ch, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (ch == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *nbr, char *base, int radix)
{
	char	*head;
	int		negative;
	int		result;
	int		cur_number;

	if (radix < 2)
		return (0);
	head = nbr;
	negative = 1;
	result = 0;
	while (*head == '\t' || *head == '\n' || *head == '\v'
		|| *head == '\f' || *head == '\r' || *head == ' ')
		head++;
	while (*head == '+' || *head == '-')
		if (*(head++) == '-')
			negative = -negative;
	while (*head)
	{
		cur_number = ft_get_number(*head, base);
		if (cur_number < 0)
			break ;
		result = (result * radix) + (negative * cur_number);
		head++;
	}
	return (result);
}