#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int	mod;
	int	flag;
	char	numb;
	
	flag = 0;
	mod = 1000000000;
	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		mod = 0;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (mod != 0)
	{
		numb = (nb / mod) + '0';
		nb = nb % mod;
		mod /= 10;
		if (numb != '0')
			flag = 1;
		if (flag == 1)
			write(1, &numb, 1);
	}
}
