#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int main(void)
{
	ft_putstr("hello world");
	return (0);
}