#include <unistd.h>

static void	print_hex(int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb > 16)
	{
		print_hex(nb / 10);
		print_hex(nb % 10);
	}
	else
		write(1, &hex[nb], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 31 && 0 <= str[i]) || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}