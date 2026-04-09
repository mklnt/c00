#include <unistd.h>

void	ft_print_combn(int n);

void	write_array(char *str);

int	main(void)
{
	ft_print_combn(1);
	write(1, "\n\n", 2);
	ft_print_combn(2);
	write(1, "\n\n", 2);
	ft_print_combn(3);
	write(1, "\n\n", 2);
	ft_print_combn(9);
	write(1, "\n\n", 2);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	char	c[n];

	i = n - 1;
	j = 0;
	while (i >= 0)
	{
		while (j <= 9)
		{
			if ( c[i] != c[n] && i != n)
				c[i] = j + '0';
			j ++;
			/*
			while ( c[i] != c[n] && i != n)
				write(1, &c[i], 1);
				c[i] = j;
				j ++;*/
		}
		i --;
		j = 0;
		//write(1, &c[i], 1);
	}
	write_array(c);
	
}

void	write_array(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i ++;
	}
}
