int	check(char *str, int *i)
{
	int		minus_count;
	int		j;

	j = 0;
	while (str[j] && (str[j] == '\f' || str[j] == '\t' || str[j] == ' ' \
		|| str[j] == '\n' || str[j] == '\r' || str[j] == '\v'))
		j++;
	minus_count = 0;
	while (str[j] && (str[j] == '+' || str[j] == '-'))
	{
		if (str[j] == '-')
			minus_count++;
		j++;
	}
	*i = j;
	return (minus_count);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		ret;
	int		i;

	sign = 1;
	if ((check(str, &i) % 2) != 0)
		sign = -1;
	ret = 0;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	ret *= sign;
	return (ret);
}

