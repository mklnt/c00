#include <unistd.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	char	a1;
	char	b1;
	char	a2;
	char	b2;

	a1 = '0';
	b1 = '0';

	a2 = '0';
	b2 = '1';
	while (a1 <= '9')
	{
		while (b1 <= '8')
		{
			while (a2 <= '9')
			{
				while (b2 <= '9')
				{
					if (a1 != a2 || b1 != b2)
					{
						write(1, &a1, 1);
						write(1, &b1, 1);
						write(1, " ", 1);
						write(1, &a2, 1);
						write(1, &b2, 1);
						if (a1 != '9' || b1 != '8' || a2 != '9' || b2 != '9')
							write(1, ", ", 2);
					}
					b2 ++;
				}
				b2 = '0';
				a2 ++;
			}
			a2 = '0';
			b2 = '0';
			b1 ++;
		}
		b1 = '0';
		a1 ++;
	}
}
