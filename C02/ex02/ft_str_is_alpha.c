int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			i++;
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
