#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	char	c;

	c = 'a';
	ft_putchar(c);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
