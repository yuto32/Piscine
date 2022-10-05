char	*ft_strcapitalize(char *str)
{
	int	i;

	if ('a' <= str[0] && str[0] <= 'z')
		str[0] = str[0] - 'a' + 'A';
	i = 1;
	while (str[i])
	{
		if (str[i - 1] < '/' && 'a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}