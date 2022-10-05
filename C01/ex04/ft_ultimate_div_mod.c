void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;

	tmp_a = *a;
	*a = *a / *b;
	*b = tmp_a % *b;
}

